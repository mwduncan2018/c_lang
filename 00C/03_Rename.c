#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// struct tm
// time_t
// clock_t
// timespec
// time_t time(time_t *destTime);
// double difftime(time_t timeEnd, time_t timeStart);
// struct tm *localtime(cnst time_t *sourceTime);
// size_t strftime(char *strDest, size_t maxsize, const char *format, const struct tm)
// etc.

int main(void) {
    time_t rawtime = time(NULL);
    struct tm *ptm = localtime(&rawtime);
    printf("The time is: %02d/%02d/%04d %02d:%02d:%02d\n",
        ptm->tm_mday, ptm->tm_mon, ptm->tm_year + 1900, ptm->tm_hour, ptm->tm_min, ptm->tm_sec);
    
    return 0;
}
