/*
 * Ch05 Ex08 | C Programming, A Modern Approach
 *
 * The following if statement is unnecessarily complicated. Simplify
 * it as much as possible. (Hint: The entire statement can be replaced
 * by a single assignment.)
 * if (age >= 13)
 *     if (age <= 19)
 *         teenager = true;
 *     else
 *         teenager = false;
 * else if (age < 13)
 *     teenager = false;
 */
#include <stdio.h>

int main(void) {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Teenager: %s\n", age < 13 ? "False" : age <= 19 ? "True" : "False");
    return 0;
}