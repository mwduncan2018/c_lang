#include <stdio.h>
#include <time.h>

int main(void) {
    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);
    printf("The time is: %02d/%02d/%04d %02d:%02d:%02d\n",
        ptm->tm_mday,
        ptm->tm_mon,
        ptm->tm_year + 1900,
        ptm->tm_hour, 
        ptm->tm_min,
        ptm->tm_sec);
    return 0;
}