#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];

    while (1 == 1) {
        printf("Enter a string (Enter \"Garbage\" to exit): ");
        scanf("%99s", input);
        if (strcmp(input, "Garbage") == 0) {
            goto UsingGoToIsGarbage;
        }
    }

    UsingGoToIsGarbage:
        printf("Why would anyone use GoTo? It is pure garbage.\n");

    return 0;
}