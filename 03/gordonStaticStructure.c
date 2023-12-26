#include <stdio.h>
#include <stddef.h>

typedef struct Guitar {
    char model;
    int price;
} Guitar;

int main(int argc, char* argv[]) {
    /* Static structures are allocated on the stack. */
    const Guitar guitar = { 'A', 1900 };

    printf("\n_____Guitar Data_____\n");
    printf("model: %c\n", guitar.model);
    printf("price: %d\n", guitar.price);

    printf("\n_____Guitar Byte Size_____\n");
    printf("model: %zu\n", sizeof(guitar.model));
    printf("price: %zu\n", sizeof(guitar.price));

    printf("\n_____Guitar Byte Size_____\n");
    printf("guitar: %zu\n", sizeof(guitar));

    printf("\n_____Starting Address Of Model_____\n");
    printf("address: %p", &guitar.model);
    printf("\n_____Starting Address Of Price_____\n");
    printf("address: %p", &guitar.price);

    printf("\n\n");
    return 0;
}