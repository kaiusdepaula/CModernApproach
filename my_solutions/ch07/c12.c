/*
Write a program that evaluates an expression:
Enter an expression: 1+2.5*3
Value of expression: 10.5
The operands in the expression are floating-point numbers; the operators are +, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other
operator).
*/

#include <stdio.h>

int main(void){
    float expression_total = 0.0f, right_num;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &expression_total);

    while((op = getchar()) != '\n'){
        scanf("%f", &right_num);
        switch (op)
        {
        case '+':
            expression_total += right_num;
            break;
        case '-':
            expression_total -= right_num;
            break;
        case '/':
            expression_total /= right_num;
            break;
        case '*':
            expression_total *= right_num;
            break;
        default:
            printf("Invalid operation code!");
            goto end;
        }
    }
    
    printf("Value of expression: %f\n", expression_total);
    end:
    return 0;
}