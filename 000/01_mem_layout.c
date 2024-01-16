#include <stdio.h>

int global = 1; // Not initialized, so stored in bss

int main(void) {
    static int i = 2;
    static int x;
    return 0;
}