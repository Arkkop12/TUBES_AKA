#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int pascal(int row, int col) {
    int result = 1;

    for (int i = 0; i < col; i++) {
        result = result * (row - i) / (i + 1);
    }

    return result;
}

void printPascal(int n) {
    for (int row = 0; row < n; row++) {
        for (int space = 0; space < n - row - 1; space++) {
            printf(" ");
        }
        for (int col = 0; col <= row; col++) {
            printf("%d ", pascal(row, col));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    clock_t start, end; 

    numRows = 2;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock(); 
    printPascal(numRows);
    end = clock(); 
    printf("Waktu eksekusi: %f detik\n\n", (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 5;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi: %f detik\n\n", (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 10;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi: %f detik\n\n", (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 20;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi: %f detik\n\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
