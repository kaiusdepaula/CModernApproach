/*
Write a function check (x, y, n) that returns I if both x and y fall between 0 and n - 1.
inclusive. The function should return 0 otherwise. Assume that x, y. and n are all of type
int.
*/
#include <stdio.h>
int check(int x, int y, int n);

int main(void){
    int x = 0, y=6, n=5;
    int flag = check(x, y, n);
    printf(
        "Values %d and %d%s fall between %d and %d.\n",
        x,
        y,
        flag ? "" : " don't",
        0,
        n
    );
}

int check(int x, int y, int n){
    if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1) {
        return 1;
    }
    return 0;
}