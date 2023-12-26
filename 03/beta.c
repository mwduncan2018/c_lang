#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    // Allocate memory
    int* b = (int*)calloc(4,sizeof(int));

    // Assign values
    for (int i = 0; i < 4; i++) {
        *(b+i) = i;
    }

    // Print values
    printf("[Address = %p]\n", b);
    for (int i = 0; i < 4; i++) {
        printf("[Value = %d]\n", *(b+i));
    }

    // Remove space
    b = (int*)realloc(b, (2)*sizeof(int));

    // Add space
    b = (int*)realloc(b, (8)*sizeof(int));

    free(b);
}

