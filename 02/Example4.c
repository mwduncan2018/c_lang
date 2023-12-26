#include <stdio.h>
#include <string.h>
#include <time.h>

struct Stock {
    char name[10];
    float price;
    float dividend;
};
typedef struct Stock Stock;
typedef struct tm Time;

void printHeading();
void printStocks(Stock stockList[], int size);

int main() {
    printHeading();
    Stock aapl = {"AAPL",184.92,0.24};
    Stock tsla = {"TSLA",260.54,0.00};
    Stock mcd = {"MCD",293.70,1.52};
    Stock *stockList[3] = {&aapl,&tsla,&mcd};
    printStocks(*stockList, sizeof(stockList));
    return 0;
}

void printHeading() {
    time_t t = time(NULL);
    Time *dateTime = localtime(&t);
    printf("Stock info as of %02d/%02d/%04d\n",
        dateTime->tm_mday,
        dateTime->tm_mon + 1,
        dateTime->tm_year + 1900);
}

/* Bug in this function */
void printStocks(Stock stockList[], int size) {
    printf("| Name | Price | Dividend | Yield |\n");
    for (int i = 0; i < size; i++) {
        printf("| %s | %f | %f | %f |\n",
            stockList[i].name,
            stockList[i].price,
            stockList[i].dividend,
            (stockList[i].dividend/stockList[i].price));
    }
}