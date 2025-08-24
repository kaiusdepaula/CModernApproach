/*
 * Ch08 Pr17 | C Programming, A Modern Approach
 *
 * Write a program that prints an n x n magic square (a square arrangement of
 * the numbers 1, 2, ..., n^2 in which the sums of the rows, columns, and
 * diagonals are all the same). The user will specify the value of n:
 * This program creates a magic square of a specified size.
 * The size must be an odd number between 1 and 99.
 * Enter size of magic square: 5
 *    17   24    1    8   15
 *    23    5    7   14   16
 *     4    6   13   20   22
 *    10   12   19   21    3
 *    11   18   25    2    9
 *
 * Store the magic square in a two-dimensional array. Start by placing the
 * number 1 in the middle of row 0. Place each of the remaining numbers, 2,
 * 3, ..., n^2 by moving up one row and over one column. Any attempt to go
 * outside the bounds of the array should "wrap around" to the opposite side
 * of the array. For example, instead of storing the next number in row -1,
 * we would store it in row n - 1 (the last row). Instead of storing the next
 * number in column n, we would store it in column 0. If a particular array
 * element is already occupied, put the number directly below the previously
 * stored number. If your compiler supports variable-length arrays, declare
 * the array to have n rows and n columns. If not, declare the array to have
 * 99 rows and 99 columns.
 */

 #include <stdio.h>

 int main(void) {
    int size, x_pos, y_pos;
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    // Validate input: odd number between 1 and 99
    if (size < 1 || size > 99 || size % 2 == 0) {
        printf("Please provide an odd number between 1 and 99.\n");
        return 1;
    }

    int map[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            map[i][j] = 0;
        }
    }
    // Position x in the middle first
    x_pos = size / 2;
    y_pos = 0;
    for (int i = 1; i <= size * size; i++) {
        map[y_pos][x_pos] = i;

        int prev_x = x_pos;
        int prev_y = y_pos;

        // Move up and right
        x_pos = (x_pos + 1) % size;               // wrap right
        y_pos = (y_pos - 1 + size) % size;        // wrap up

        // If spot occupied, move down from previous position
        if (map[y_pos][x_pos] != 0) {
            x_pos = prev_x;                       // stay in same column
            y_pos = (prev_y + 1) % size;          // move down one row
        }
    }


    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            printf("%5d", map[i][j]);
        }
        printf("\n");
    }
    return 0;
 }