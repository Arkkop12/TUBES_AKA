#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pascal(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    }
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
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

    numRows = 2;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    clock_t start = clock();
    printPascal(numRows);
    clock_t end = clock();
    printf("Waktu eksekusi untuk %d baris: %.6f detik\n\n", numRows, (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 5;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi untuk %d baris: %.6f detik\n\n", numRows, (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 10;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi untuk %d baris: %.6f detik\n\n", numRows, (double)(end - start) / CLOCKS_PER_SEC);

    numRows = 20;
    printf("Segitiga Pascal dengan %d baris:\n", numRows);
    start = clock();
    printPascal(numRows);
    end = clock();
    printf("Waktu eksekusi untuk %d baris: %.6f detik\n\n", numRows, (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
