#include <stdio.h>
#include <string.h>

int main(void) {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++) {
        (x == i) ? printf("Found %d\n", i) : printf("%d Not Found\n", i);
    }

    return 0;
}