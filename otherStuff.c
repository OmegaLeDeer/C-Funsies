#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char text[20];

    printf("Welcome!\nYou are now in developer mode.\nPlease enter a command.\n");

    fgets(text, sizeof(text), stdin);

    if (text == "ls") {
        printf("ls complete");
    }
    else {
        printf("Command not recognized");
    }

    return 0;
}