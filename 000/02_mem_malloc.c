#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* ptr;
    int i, numberOfElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);
    printf("Entered number of elements: %d\n", numberOfElements);

    ptr = (int*)malloc(numberOfElements * sizeof(int));

    if (ptr == NULL) {
        printf("Memory was not allocated\n");
        exit(0);
    }
    else {
        printf("Memory was successfully allocated using malloc.\n");
        for (i = 0; i < numberOfElements; ++i) {
            ptr[i] = i + 1;
        }
        printf("Printing the elements of the array...\n");
        for (i = 0; i < numberOfElements; ++i) {
            printf("%d, ", ptr[i]);
        }
        printf("\n");
    }
    return 0;
}