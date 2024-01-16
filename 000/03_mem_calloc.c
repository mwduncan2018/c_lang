#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* ptr;
    int numberOfElements, index;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);
    printf("The number of elements has been set to %d\n", numberOfElements);

    ptr = (int*)calloc(numberOfElements, sizeof(int));

    if (ptr == NULL) {
        printf("Memory was not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory was successfully allocated.\n");
        for (index = 0; index < numberOfElements; ++index) {
            ptr[index] = index + 1;
        }
        printf("The contents in memory are listed below.\n");
        for (index = 0; index < numberOfElements; ++index) {
            printf("%d, ", ptr[index]);
        }
        printf("\n");
    }
    return 0;
}