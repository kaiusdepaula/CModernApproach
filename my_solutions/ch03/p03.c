/*
Write a program that breaks down an ISBN entered by
the user:
*/

#include<stdio.h>

int main(void) {
    int prefix, group, publisher, item, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
    printf("GS1 Prefix: %d", prefix);
    printf("\nGroup Identifier: %d", group);
    printf("\nPublisher Code: %d", publisher);
    printf("\nItem Number: %d", item);
    printf("\nCheck Digit: %d\n", check);

    return 0;
}