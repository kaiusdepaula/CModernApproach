/*
Write a function digit (n, k) that returns the k"' digit (from the right) in n (a posi¬
tive integer). For example, digit (829, 1) returns 9. diqit (829, 2) returns 2. and
digit (829, 3) returns 8. If k is greater than the number of digits in n. have the func¬
tion return 0
*/

#include <stdio.h>
int digit (int n, int k);

int main(void) {
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a k value to retrieve: ");
    scanf("%d", &k);

    printf("Retrieval: %d\n", digit(n, k));
    return 0;
}
int digit (int n, int k) {
    int d;
    while(k > 0){
        d = n % 10;
        n = n / 10;
        k--;
    }
    return d;
};