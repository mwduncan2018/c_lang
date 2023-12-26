#include <stdio.h>
#include <stdlib.h>

void print_int_by_ref(int* number_ptr);
void print_int_by_val(int number);

void malloc_int_dangerous(int* number_ptr);
void malloc_int_safe(int** number_ptr);

int main(int argc, char* argv[]) {

}

void print_int_by_ref(int* number_ptr) {
    printf("Address: &p | Value: %ls\n", number_ptr, *number_ptr);
}
void print_int_by_val(int number) {
    printf("Address: %p | Value: %d\n", &number, number);
}

void malloc_int_dangerous(int* number_ptr) {
    number_ptr = (int*)malloc(sizeof(int));
    // This is a memory leak
}
void malloc_int_safe(int** number_ptr) {
    *number_ptr = (int*)malloc(sizeof(int));
}
