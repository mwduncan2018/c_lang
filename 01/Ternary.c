#include <stdio.h>
#include <string.h>

int main(void) {
    int numA;
    int numB;
    int numMax;
    printf("Enter a number: ");
    scanf("%d", &numA);
    printf("Enter another number: ");
    scanf("%d", &numB);
    numMax = (numA > numB) ? numA : numB;
    printf("The max number is %d\n", numMax);
    return 0;
}