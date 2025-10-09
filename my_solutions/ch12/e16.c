/*
Write a loop that prints the highest temperature in the temperatures array (see Exercise
14) for each day of the week. The loop body should call the find_largest function,
passing it one row of the array at a time.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int find_max(int a[], int n);

int main(void){
    srand(time(NULL));
    int temperatures[7][24];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 24; j++) {
            temperatures[i][j] = rand() % 40;
        }
    }
    // Reused the messed up code to print every line. 2 for loops is best here...
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
    for (int i = 0; i < 7; i++){
        printf("Max value on [%d]: %d\n", i, find_max(&temperatures[i][0], 24));
    }
    printf("\n");
    return 0;
}

int find_max(int a[], int n) {
    int max = *a;
    for (int *p = a+1; p < a + n; p++) {
        if (*p > max){
            max = *p;
        }
    }
    return max;
}