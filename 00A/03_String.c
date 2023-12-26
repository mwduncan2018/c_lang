#include <stdio.h>

int main(void)
{
    char name[] = "KHAN";
    // C strings are null terminated
    // "K" "H" "A" "N" "NUL"
    // 75  72  65  78  0

    char singleChar = 'A';
    // 65

    char newLine = '\n';
    char horizontalTab = '\t';
    char singleQuote = '\'';
    char doubleQuote = '\"';
    char letterA = '\x41'; // Hex 41 is ASCII letter A
    char null = '\0';
    char backslash = '\\';

    putchar(newLine);
    putchar(horizontalTab);
    putchar(singleQuote);
    putchar(doubleQuote);
    putchar(letterA);
    putchar(null);
    putchar(backslash);
    putchar('\n');
    putchar('\n');

    return 0;
}