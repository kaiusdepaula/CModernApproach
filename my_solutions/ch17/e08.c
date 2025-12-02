/*
Section 15.2 describes a file, stack.c. Uiat provides functions for storing integers in a
stack. In that section, the stack was implemented as an array. Modify stack.c so that a
stack is now stored as a linked list. Replace the contents and top variables by a single
variable that points to the first node in the list (the "top” of the stack). Write the functions in
stack.c so that they use this pointer. Remove the is full function, instead having
push return either true (if memory was available to create a node) or false (if not).
*/

// KnKing never printed the full implementation for the stack on chapter 15. 
// This is why sometimes books are the worst way of doing programming exercises. Here I go either way.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

void make_empty(struct node **stack);
bool is_empty(struct node *stack);
bool push(struct node **stack, int i);
int pop(struct node **stack);

int main(void) {

    struct node *stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Popped: %d\n", pop(&stack)); // 30
    printf("Popped: %d\n", pop(&stack)); // 20

    push(&stack, 40);
    push(&stack, 50);

    while (!is_empty(stack)) {
        printf("Popped: %d\n", pop(&stack));
    }

    return 0;
}

void make_empty(struct node **stack){
    while(!is_empty(*stack)){
        pop(stack);
    }
}

bool is_empty(struct node *stack){
    return stack == NULL;
}

bool push(struct node **stack, int i){
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL){
        return false;
    }
    new_node->value = i;
    new_node->next = *stack;
    *stack = new_node;
    return true;
}
int pop(struct node **stack){
    if(is_empty(*stack)){
        printf("Stack Underflow!");
        exit(EXIT_FAILURE);
    }
    struct node *old_top = *stack;
    int value = old_top->value;

    *stack = old_top->next;
    free(old_top);

    return value;
}