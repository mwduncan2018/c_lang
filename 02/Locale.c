#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, ""); //Sets locale to the OS locale
    const struct lconv* const currentlocale = localeconv();
    printf("Current locale is %s\n",
        currentlocale->int_curr_symbol);
}