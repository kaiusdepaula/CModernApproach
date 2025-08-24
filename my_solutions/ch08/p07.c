/*
Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
column sums:
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 1 7 3 2 9
Enter row 5: 6 14 2 6 0
Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/

#include <stdio.h>
#define NROW 5
#define NCOL 5


int main(void) {
    int matrix[NROW][NCOL], colsums[NCOL], rowsums[NROW];
    int total_sum;

    // Stores integers in array
    for (int i = 0; i < NROW; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < NCOL; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute row total
    for (int i = 0; i < NROW; i++) {
        total_sum = 0;
        for (int j = 0; j < NCOL; j++) {
            total_sum += matrix[i][j];
        }
        rowsums[i] = total_sum;
    }

    // Compute column total
    for (int i = 0; i < NCOL; i++) {
        total_sum = 0;
        for (int j = 0; j < NROW; j++) {
            total_sum += matrix[i][j];
        }
        colsums[i] = total_sum;
    }

    printf("Row totals: ");
    for (int i = 0; i < NROW; i++){
        printf("%d ", rowsums[i]);
    }
    printf("\nColumn totals: ");
    for (int i = 0; i < NCOL; i++){
        printf("%d ", colsums[i]);
    }
    printf("\n");
    return 0;
}