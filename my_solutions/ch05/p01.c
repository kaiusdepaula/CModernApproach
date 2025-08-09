/*
Write a program that calculates how many digits a number contains:
Enter a number: 374
The number 374 has 3 digits
You may assume that the number has no more than four digits. Hint: Use if statements to
test the number. For example, if the number is between 0 and 9, it has one digit. If the num¬
ber is between 10 and 99. it has two digits
*/
#include <stdio.h>

int main(void){
    int number, digits;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number >= 1000) {
        digits = 4;
    } else if (number >= 100) {
        digits = 3;
    } else if (number >= 10) {
        digits = 2;
    } else {
        digits = 1;
    }
    printf("The number %d has %d digits.\n", number, digits);
    return 0;
}