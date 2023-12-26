#include <stdio.h>
#include <string.h>

void swap(int *a, int *b);
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void) {
    int x = 1;
    int y = 2;
    printf("Before Swap\nx = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap\nx = %d, y = %d\n", x, y);
    return 0;
}