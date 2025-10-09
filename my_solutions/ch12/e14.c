/*
Assume that the following array contains a week's worth of hourly temperature readings,
with each row containing the readings for one day:
int temperatures[7][24];
Write a statement that uses the search function (see Exercise 7) to search the entire
temperatures array for the value 32.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool search(const int *a, int n, int key);

int main(void){
    srand(time(NULL));
    int temperatures[7][24];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 24; j++) {
            temperatures[i][j] = rand() % 32;
        }
    }
    printf("The value %s\n", search(&temperatures[0][0], 7 * 24, 32)? "has been found.": "has not been found.");
    return 0;
}

bool search(const int *a, int n, int key){
    for (const int *p = &a[0]; p < a + n; p++){
        if (*p == key){
            return true;
        }
    }
    return false;
}