/*
Show the output of the following program and explain what it does.
*/

#include <stdio.h>
int f1(int (*f)(int));
int f2(int i);
int main(void) {
    printf("Answer: %d\n", f1(f2));
    return 0;
}
int f1(int (*f)(int)) {
    int n = 0;
    while ( (*f) (n)) n++;
    return n;
}
int f2(int i) {
    return i * i + i - 12;
}

/*
Answer: 3
f1 returns an int, it's argument is a pointer to a function that returns int. 
We initiate n as zero and while the function that f1 calls returns values that are different than 0, the while loop will
continue. Since when n = 3 zeroes the function defined in f2, f1 stops and returns it's value for n, which is 3.
*/