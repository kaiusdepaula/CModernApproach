/*
Write a program that finds the largest in a series of numbers entered by the user. The pro¬
gram must prompt the user to enter numbers one by one. When the user enters 0 or a nega¬
tive number, the program must display the largest nonnegative number entered:
*/
#include <stdio.h>
int main(void) {
    float biggest_number = 0.0f, typed = 0.0f;
    for (int i = 0; i < 6; i++) {
        printf("Enter a number: ");
        scanf("%f", &typed);
        if (typed > 0.0f) {
            biggest_number = typed > biggest_number ? typed : biggest_number;
        }
    }
    printf("The largest number entered is %.2f\n", biggest_number);
}