/*
Write a single expression whose value is either-1.0, or +1. depending on whether i is less
than, equal to, or greater than j. respectively
*/

#include <stdio.h>

int main(void) {
    int i, j;
    printf("Value for i: ");
    scanf("%d", &i);
    printf("Value for j: ");
    scanf("%d", &j);

    printf("The value is: %d\n", i < j ? -1 : i == j ? 0 : 1);
    return 0;
}