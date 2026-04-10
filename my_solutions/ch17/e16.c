/*
Write the following function. The call sum (g, i, j) should return g (i) + ...+g(j).
int sum(int (*f)(int), int start, int end);
*/

#include <stdio.h>

int f(int i);
int sum(int (*f)(int), int start, int end);

int main(void){
    int start = 1, end = 10;
    printf("Result: %d\n", sum(f, start, end));
    return 0;
}

int f(int i){
    return i;    
}
int sum(int (*f)(int), int start, int end){
    int aggregated = 0;
    if (start > end){
        return 0;
    }
    for (int i = start; i <= end; i++){
        aggregated += f(i);
    }
    return aggregated;
}