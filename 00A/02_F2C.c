#include <stdio.h>

int main(void)
{
    printf("Enter a temperature in F: ");
    float tempF;
    scanf("%f", &tempF);
    float tempC = (tempF - 32.0) * 5.0 / 9.0;
    printf("Temp in C is %.2f", tempC);
    printf("\n");
    
    return 0;
}