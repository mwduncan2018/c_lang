#include <stdio.h>
#include <stdbool.h>
#include <string.h>

float CToF(float tempF);

int main(void) {
    printf("Temp Conversion Table\n");
    printf("=======================\n");
    for (float tempF = 10.0; tempF < 100.0; tempF += 5.0) {
        float tempC = CToF(tempF);
        printf(" %.1f F    |    %5.1f C \n", tempF, tempC);
    }
    printf("=======================\n");
}

float CToF(float tempF) {
    float tempC =  (tempF - 32.0) * 5.0 / 9.0;
    return tempC;
}