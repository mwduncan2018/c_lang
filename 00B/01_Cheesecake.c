#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    printf("|---------------------|\n");
    printf("| Number | Number * 2 |\n");
    printf("|---------------------|\n");
    for (int i = 0; i < 2; i++) {
        printf("| %6.1d | %10.1d |\n", i, i*2);
    }
    printf("|---------------------|\n");

    int x = 100;
    int y = 200;
    printf("Before Swap (x = %d, y = %d)\n", x, y);
    Swap(&x, &y);
    printf("After Swap (x = %d, y = %d)\n", x, y);

    return EXIT_SUCCESS;
}

// Deference the pointers
void Swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
