#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define ARRAY_SIZE 4

typedef struct Person {
    int age;
    int id;
} Person;

int main(int argc, char* argv[]) {
    int numList[] = {1,2,3,4};
    const double floatList[] = {1.23,4,56,7,89};
    const char str[] = "Butters";
    const Person personList[] = {
        { 21, 1 },
        { 41, 2 }
    };

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Number: %d\n", numList[i]);
        numList[i] += 2;
    }

    assert(numList == &numList[0]);

    return 0;
}