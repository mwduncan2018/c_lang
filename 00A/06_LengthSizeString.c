#include <stdio.h>
#include <string.h>

int main(void)
{
    char msg[100] = "Watch the desire go away.";

    printf("The length is %ld\n", strlen(msg));
    printf("The size is %ld\n", sizeof(msg));

    return 0;
}