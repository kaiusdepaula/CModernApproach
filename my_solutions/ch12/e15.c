/*
Write a loop that prints all temperature readings stored in row i of the temperatures
array (see Exercise 14). Use a pointer to visit each element of the row
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int temperatures[7][24];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 24; j++) {
            temperatures[i][j] = rand() % 40;
        }
    }
    int counter = 0;
    for (int *a = &temperatures[0][0]; a < &temperatures[0][0] + 7 * 24; a++){
        printf("%d, ", *a);
        counter++;
        if (counter / 24 == 1){
            counter = 0;
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}