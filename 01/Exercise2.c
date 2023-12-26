#include <stdio.h>

/* Determine the length of a string */
int main(void) {
    char x[128];
    printf("Enter a string: ");
    scanf("%[^\n]s", x);

    int count = 0;
    while (x[count] != '\0') {
        count++;
    }

    printf("The string length is %d\n", count);

    return 0;
}