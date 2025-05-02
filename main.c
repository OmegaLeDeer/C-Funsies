#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *textParser(char **text, int length);

int main() {

    // Introduction 

    char name[50];

    char *text[] = "lorem Ipsum sit amet dolor.";

    printf("Welcome to my C Program. What\'s your name?\n");

    fgets(name, sizeof(name), stdin);

    printf("Welcome, %s.\n", name);

    // Text Parsing

    int length = strlen(text);

    printf("%s",textParser(text, length));

    return 0;

}

void *textParser(char **text, int length) {

    *text = malloc(length * sizeof(int));
    if(*text == NULL){

        return;

    }

    printf("%s\n",text);

    for (int i=0; i < length; i++) {

        if(i>0 && isupper((*text)[i]) && (*text)[i-1] != " "){
            printf("%s",newText[i]);
        }

    

    }
    
    return;

}