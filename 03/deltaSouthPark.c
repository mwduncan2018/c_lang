#include <stdio.h>
#include <string.h>

typedef struct Person {
    char* name;
    int age;
    void (*greeting)();
} Person;

void english_greeting();
void canadian_greeting();

int main(int argc, char* argv[]) {
    void (*greeting)(); // Function pointer!

    if (argc > 1) {
        greeting = !strcmp("canadian", argv[1]) ? 
            &canadian_greeting : &english_greeting;
    } else {
        printf("A greeting argument is required");
        return 1;
    }

    Person cartman = { "Cartman", 21, greeting };
    cartman.greeting();

    return 0;
}

void english_greeting() {
    printf("No kitty, this is my pot pie!\n");
}
void canadian_greeting() {
    printf("You're not my buddy, pal!\n");
    printf("You're not my pal, friend!\n");
    printf("You're not my friend, guy!\n");
}