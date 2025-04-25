#include <stdio.h>
#include <stdlib.h>

int main() { 

    char name[50];

    printf("Welcome to my C Program. What\'s your name?\n");

    fgets(name, sizeof(name), stdin);

    printf("Welcome, %s.", name);

    return 0;
}
