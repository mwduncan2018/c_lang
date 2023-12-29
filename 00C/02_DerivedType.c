#include <stdio.h>
#include <string.h>

struct person {
    char firstName[100];
    char lastName[100];
    int age;
    char hometown[100];
};
void personPrint(struct person);

int main() {
    float v1 = 1;
    float *p1 = &v1;
    printf("&v1 ... %p\n", &v1);
    printf(" p1 ... %p\n", p1);
    printf("*p1 ... %f\n", *p1);
    printf(" v1 ... %f\n", v1);
    struct person mike;
    mike.age = 55;
    strcpy(mike.firstName, "Mike");
    strcpy(mike.lastName, "Tyson");
    strcpy(mike.hometown, "Boca");
    personPrint(mike);    
}

void personPrint(struct person person) {
    printf("Name: %s %s\n", person.firstName, person.lastName);
    printf("Hometown: %s\n", person.hometown);
    printf("Age: %d\n", person.age);
}