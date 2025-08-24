/*
 * Ch08 Pr09 | C Programming, A Modern Approach
 *
 * Write a program that generates a "random walk" across a 10x10 array. The
 * array will contain characters (all '.' initially). The program must randomly
 * "walk" from element to element, always going up, down, left, or right by
 * one element. The elements visited by the program will be labeled with the
 * letters A through Z, in the order visited. Here's an example of the desired
 * output:
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided
 * by 4. There are four possible values for the remainder - 0, 1, 2, and 3 -
 * indicating the direction of the next move. Before performing a move, check
 * that (a) it won't go outside the array, and (b) it doesn't take us to an
 * element that already has a letter assigned. If either condition is violated,
 * try moving in another direction. If all four directions are blocked, the
 * program must terminate.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NROW 10
#define NCOL 10

// 
// rand() % 40
int main(void){
    srand((unsigned) time(NULL));
    int x_pos = 0, y_pos = 0, rng;
    // Initialize map
    char map[NROW][NCOL];
    for (int i = 0; i < NROW; i++) {
        for (int j = 0; j < NCOL; j++) {
            map[i][j] = '.';
        }
    }

    // Loop over alphabet
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        int valid_paths = 0, paths_to_select[4];
        // Check rng = 0
        if (
            x_pos-1 > 0 && 
            map[x_pos-1][y_pos] == '.'
        ) {
            paths_to_select[valid_paths] = 0;
            valid_paths++;
        }
        // Check rng = 1
        if (
            y_pos-1 > 0 && 
            map[x_pos][y_pos-1] == '.'
        ) {
            paths_to_select[valid_paths] = 1;
            valid_paths++;
        }
        // Check rng = 2
        if (
            x_pos+1 < NROW && 
            map[x_pos+1][y_pos] == '.'
        ) {
            paths_to_select[valid_paths] = 2;
            valid_paths++;
        }
        // Check rng = 3
        if (
            y_pos+1 < NCOL && 
            map[x_pos][y_pos+1] == '.'
        ) {
            paths_to_select[valid_paths] = 3;
            valid_paths++;
        }
        if (valid_paths == 0){
            break;
        }
        rng = paths_to_select[rand() % valid_paths];
        switch (rng)
        {
        case 0:
            x_pos -= 1;
            break;
        case 1:
            y_pos -= 1;
            break;
        case 2:
            x_pos += 1;
            break;
        case 3:
            y_pos += 1;
            break;
        default:
            break;
        }
        map[x_pos][y_pos] = letter;
    }

    for (int i = 0; i < NROW; i++) {
		for (int j = 0; j < NCOL; j++) {
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
    return 0;
}