#include <stdio.h>
#include <stdlib.h>

char *textParser(char *text);

int main() {

    char name[50];

    printf("Welcome to my C Program. What\'s your name?\n");

    fgets(name, sizeof(name), stdin);

    printf("Welcome, %s.\n", name);

    printf("%s",textParser(name));

    return 0;

}

char *textParser(char *text) {

    if(text == NULL){

        return NULL;

    }

    

    return text;

}