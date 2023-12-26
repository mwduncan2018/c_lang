#include <stdio.h>
#include <string.h>

int main(void) {
    char str[128];
    int strLength;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    strLength = strlen(str);
    printf("%s\n", str);

    for (int i = 0; i < strLength; i++) {
        printf("-");
    }
    
    printf("\n");
    return 0;
}