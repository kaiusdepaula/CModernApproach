/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
void generate_random_walk(char walk[10] [10]);
void print_array(char walk[10] [10]);
main first calls generate_random_walk. which initializes the array to contain ' . 1
characters and then replaces some of these characters by the letters A through Z. as
described in the original project, main then calls print_array to display the array on
the screen.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NROW 10
#define NCOL 10

void generate_random_walk(char map[NROW][NCOL]);
void print_array(char map[NROW][NCOL]);

int main(void){
    char map[NROW][NCOL];
    generate_random_walk(map);
    print_array(map);
    return 0;
}

void print_array(char map[NROW][NCOL]){
    for (int i = 0; i < NROW; i++) {
		for (int j = 0; j < NCOL; j++) {
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
}

void generate_random_walk(char map[NROW][NCOL]){
    srand((unsigned) time(NULL));
    int x_pos = 0, y_pos = 0, rng;
    // Insert '.' on the map.
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
}