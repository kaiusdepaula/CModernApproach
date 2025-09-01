/*
Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n] ) ;
After obtaining the number n from the user, main will call create_magic_square.
passing it an n x n array that is declared inside main. create_magic_square will fill
the array with the numbers 1, 2.rr as described in the original project, main will then
call print_magic_square. which will display the array in the format described in the
original project. Note: If your compiler doesn’t support variable-length arrays, declare the
array in main to be 99 x 99 instead of n x n and use the following prototypes instead:
void create_magic_square(int n, char magic_square[99] [99]);
void print_magic_square(int n, char magic_square[99] [99]);
*/

 #include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    // Validate input: odd number between 1 and 99
    if (size < 1 || size > 99 || size % 2 == 0) {
        printf("Please provide an odd number between 1 and 99.\n");
        return 1;
    }
    char magic_square[size][size];

    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
    return 0;
 }

void create_magic_square(int n, char magic_square[n][n]){
    int x_pos, y_pos;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }
        // Position x in the middle first
    x_pos = n / 2;
    y_pos = 0;
    for (int i = 1; i <= n * n; i++) {
        magic_square[y_pos][x_pos] = i;

        int prev_x = x_pos;
        int prev_y = y_pos;

        // Move up and right
        x_pos = (x_pos + 1) % n;               // wrap right
        y_pos = (y_pos - 1 + n) % n;        // wrap up

        // If spot occupied, move down from previous position
        if (magic_square[y_pos][x_pos] != 0) {
            x_pos = prev_x;                       // stay in same column
            y_pos = (prev_y + 1) % n;          // move down one row
        }
    }
 }

void print_magic_square(int n, char magic_square[n][n]) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }
 }