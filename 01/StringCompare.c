#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[128];
    char str2[128];

    printf("Compare two strings -> Enter string one: ");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter string 2: ");
    scanf("%[^\n]s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are the same");
    } else {
        printf("The strings are different");
    }
    printf("\n");
    return 0;
}