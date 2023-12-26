#include <stdio.h>
#include <string.h>

int main(void) {
    int x = 0;
    Demo:
    if (x == 3)
        return 0;
    printf("...\n");
    x++;
    goto Demo;
}