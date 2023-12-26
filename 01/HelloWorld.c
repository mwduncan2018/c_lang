#include <stdio.h>

int main(void) {
  printf("Enter your name: ");
  char your_name[128];
  scanf("%[^\n]s", your_name);
  printf("Hello %s\n", your_name);
  printf("The address of your_name is %p\n", &your_name);  
}
