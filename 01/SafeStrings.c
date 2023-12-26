#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[128];
  char str2[128];
  
  printf("Concat two strings -> Enter the first string: ");
  scanf("%[^\n]s", str1);
  getchar();
  printf("Enter the second string: ");
  scanf("%[^\n]s", str2);
  strcat(str1, str2);
  printf("Result: %s\n", str1);
}
