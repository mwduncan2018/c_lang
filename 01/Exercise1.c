#include <stdio.h>
#include <string.h>

/* Function declaration */
void printStars(int numStars);

int main(void) {
    char str[128] = "Four score and seven years ago...";
    printStars(strlen(str)+4);
    printf("* ");
    printf("%s", str);
    printf(" *\n");
    printStars(strlen(str)+4);
}

/* Function definition */
void printStars(int numStars) {
    for (int i = 0; i < numStars; i++)
        printf("*");
    printf("\n");
}