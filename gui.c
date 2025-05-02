#include <gtk/gtk.h>

/*
gcc `pkg-config --cflags gtk+-3.0` -o file file.c `pkg-config --libs gtk+-3.0`
*/

//Creates a static (local) function
static void print_hello (GtkWidget *widget, gpointer data)
{
    //Prints a string to the console
    g_print ("Hello World\n");
}

static void activate (GtkApplication *app, gpointer user_data)
{
    //Initializes two GtkWidget objects window and button
    GtkWidget *window;
    GtkWidget *button;

    //Window parameters

    //Creates window inside app
    window = gtk_application_window_new (app);
    //Sets window title
    gtk_window_set_title (GTK_WINDOW (window), "Welcome");
    //Sets size of window
    gtk_window_set_default_size (GTK_WINDOW (window), 400, 400);

    //Button parameters

    //Button name/label
    button = gtk_button_new_with_label ("Hello World");
    //When the button is clicked, execute an action (in this case run function print_hello)
    g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
    //Associate the button to the window so it can be displayed
    gtk_window_set_child(GTK_WINDOW (window), button);

    gtk_window_present (GTK_WINDOW (window));
}

// argc is the argument counter, by default 1
// argv is basically the name used to invoke the program, an array of characters
int main (int argc, char **argv)
{

    //Initializes the GTK app under the name app
    GtkApplication *app;
    int status;

    //Creates a new application called "First app" with default flags
    app = gtk_application_new ("first.app", G_APPLICATION_DEFAULT_FLAGS);

    //Launches application by running the activate function
    g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);

    //Checks status of application (if 1 or 0) when it stops running to end the program
    status = g_application_run (G_APPLICATION (app), argc, argv);

    //Probably dumps the memory but cba to check
    g_object_unref (app);

    return status;
}
