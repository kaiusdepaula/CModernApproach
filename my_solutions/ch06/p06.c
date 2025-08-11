/*
Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100. the program should print the follow¬
ing:
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Type a number: ");
    scanf("%d", &n);

    int i = 2;
    while (i * i <= n) {
        printf("%d\n", i * i);
        i += 2;
    }
    return 0;
}