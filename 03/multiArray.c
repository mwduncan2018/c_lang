#include <stdio.h>
#include <string.h>

#define DIMENSION_X 10
#define DIMENSION_Y 4

void printMatrix(int matrix[DIMENSION_X][DIMENSION_Y]);
void flipMatrix(int matrix[DIMENSION_X][DIMENSION_Y]);

int main() {
    int matrix[DIMENSION_X][DIMENSION_Y] = {
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,0,0,1},
    };
    printf("==BEFORE==");
    printMatrix(matrix);
    flipMatrix(matrix);
    printf("==AFTER==\n");
    printMatrix(matrix);
    return 0;
}

void printMatrix(int matrix[DIMENSION_X][DIMENSION_Y]){
    for (int i = 0; i < DIMENSION_X; i++) {
        for (int a = 0; a < DIMENSION_Y; a++) {
            printf("%d  ", matrix[i][a]);
        }
        printf("\n");
    }
}
void flipMatrix(int matrix[DIMENSION_X][DIMENSION_Y]){
    for (int i = 0; i < DIMENSION_X; i++) {
        for (int a = 0; a < DIMENSION_Y; a++) {
            matrix[i][a] = matrix[i][a] ^ 1;
        }
    }
}