#include <stdio.h>
#include <string.h>

int main(void)
{
    char original[] = "Copy Me";
    char copy[100];
 
    strcpy(copy, original);
    printf("Original: %s\n", original);
    printf("Original Address: %p\n", &original);
    printf("Copy: %s\n", copy);
    printf("Copy Address: %p\n", &copy);

    return 0;
}
