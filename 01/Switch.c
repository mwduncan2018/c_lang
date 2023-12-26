#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Enter a number: ");
    int myNum;
    scanf("%d", &myNum);
    switch(myNum) {
        case 0:
            printf("You entered 0");
            break;
        case 1:
            printf("You entered 1");
            break;
        default:
            printf("You entered something other than 0 or 1\n");
            break;
    }
    return 0;
}