#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define DEFAULT_SIZE 1000

double getRandomNumber();
void gatherMetrics(size_t size, double metricArr[size]);

int main(int argc, char* argv[]) {
    int arraySize = DEFAULT_SIZE;
    if (argc > 1) {
        arraySize = strtol(argv[1], NULL, 10);
    }

    double* heatDistributionMetrics = (double*)malloc(arraySize*sizeof(double));
    if (!heatDistributionMetrics) {
        heatDistributionMetrics = (double*)malloc(DEFAULT_SIZE*sizeof(double));
    }
    double* grinderMetrics = (double*)malloc(arraySize*sizeof(double));
    if (!grinderMetrics) {
        grinderMetrics = (double*)malloc(DEFAULT_SIZE*sizeof(double));
    }
    double* pourMetrics = (double*)malloc(arraySize*sizeof(double));
    if (!pourMetrics) {
        pourMetrics = (double*)malloc(DEFAULT_SIZE*sizeof(double));
    }

    double* metricsMatrix[3] = {
        heatDistributionMetrics, grinderMetrics, pourMetrics,
    };

    for (int i = 0; i < 3; i++) {
        gatherMetrics(arraySize, metricsMatrix[i]);        
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < arraySize; j++) {
            printf("Row/Col: %d/%d ====> %f\n", i+1, j+1, metricsMatrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        free(metricsMatrix[i]);
    }
    return 0;
}

void gatherMetrics(size_t size, double metricArr[size]) {
    for (int i =0; i < size; i++) {
        metricArr[i] = getRandomNumber();
    }
}

double getRandomNumber() {
    return rand() / (2.5);
}