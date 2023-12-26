#include <stdio.h>
#include <string.h>

int main(void) {
    char password[20];
    printf("Enter the password: ");
    scanf("%19s", password);

    if (strcmp(password, "ABC123") == 0) {
        printf("Authorized!\n");
    } else {
        printf("Red Alert!\n");
    }

    return 0;
}