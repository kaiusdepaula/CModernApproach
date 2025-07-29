/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
*/
#include <stdio.h>

int main(void){
    int amount;
    printf("Enter a Dollar Amount:\n");
    scanf("%d", &amount);
    
    int bills_20 = amount / 20;
    amount = amount % 20;
    int bills_10 = amount / 10;
    amount = amount % 10;
    int bills_5 = amount / 5;
    amount = amount % 5;
    int bills_1 = amount / 1;

    printf("$20 bills: %d \n", bills_20);
    printf("$10 bills: %d \n", bills_10);
    printf("$5 bills: %d \n", bills_5);
    printf("$1 bills: %d \n", bills_1);
    return 0;
}