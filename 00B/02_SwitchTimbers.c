#include <stdio.h>
#include <string.h>

int main(void) {
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    switch (x) {
        case 'A':
            printf("A was entered\n");
            break;
        case 'B':
            printf("B was entered\n");
            break;
        default:
            printf("A was not entered\nB was not entered\n");
            break;
    }

    return 0;
}