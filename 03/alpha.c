#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    // Allocate memory
    int* a = (int*)malloc(sizeof(int));

    // Print the initial value stored where the pointer points
    printf("Initial Value: %d\n", *a);
    
    // Set what the pointer points at to 3
    *a = 3;

    // Print 3
    printf("Updated value: %d\n", *a);

    // Free the memory
    free(a);
}

