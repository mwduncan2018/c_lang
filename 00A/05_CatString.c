#include <stdio.h>
#include <string.h>

int main(void)
{
    char message[1000];
    
    // Safe versions of string functions exist
    // strcpy_s
    // strcat_s
    strcpy(message, "You will be miserable to the degree ");
    strcat(message, "that you are hung up on the notion ");
    strcat(message, "that things should - must - ");
    strcat(message, "go a certain way.\0");

    printf("%s\n", message);

    return 0;
}