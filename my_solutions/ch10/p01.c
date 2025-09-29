/*
 * ch10 pr01 | c programming, a modern approach
 *
 * modify the stack example of section 10.2 so that it stores characters
 * instead of integers. next, add a main function that asks the user to enter
 * a series of parentheses and/or braces, then indicates whether or not they're
 * properly nested:
 * 
 * enter parentheses and/or braces: ((){}{()})
 * parentheses/braces are nested properly
 *
 * hint: as the program reads characters, have it push each left parenthesis
 * or left brace. when it reads a right parenthesis or brace, have it pop the
 * stack and check that the item popped is the matching parenthesis or brace.
 * (if not, the parentheses/braces aren't nested properly.) when the program
 * reads the new-line character, have it check whether the stack is empty:
 * if so, the parentheses/braces are matched. if the stack isn't empty (or
 * if stack_underflow is ever called) the parentheses/braces aren't matched.
 * if stack_overflow is called, have the program print the message "stack
 * overflow" and terminate immediately.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define stack_size 100
int contents[stack_size];
int top = 0;

// prototypes
bool check_open(char phrase[100]);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
int pop(void);

int main(void){
    bool is_nested;
    char phrase[100];

    printf("enter parentheses and/or braces: ");
    scanf("%s", &phrase);

    is_nested = check_open(phrase);
    printf(
        "parentheses/braces are%s nested properly.\n",
        is_nested ? "" : " not"
    );
    return 0;
}
bool check_open(char phrase[100]) {
    for (int i = 0; phrase[i] != '\0'; i++) {
        char curr = phrase[i];
        char last;
        if (curr == '[' || curr == '(' || curr == '{') {
            push(curr);
        } else if (curr == ']') {
            last = pop();
            if (last != '[') return false;
        } else if (curr == ')') {
            last = pop();
            if (last != '(') return false;
        } else if (curr == '}') {
            last = pop();
            if (last != '{') return false;
        }
    }
    return is_empty();
}

bool is_empty(void) {
    return top == 0;
}
bool is_full(void) {
    return top == stack_size;
}
void push(char c) {
    if (is_full ()) {
        printf("stack overflow!\n");
        exit(0);
    } else {
        contents[top++] = c;
    }
}
int pop(void) {
    if (is_empty()) {
        printf("stack underflow!\n");
        exit(0);
    }
    else {
        return contents[--top];
    }
}
 