/*
Write the following function:
int count_occurrences(struct node *list, int n);
The list parameter points to a linked list; the function should return the number of times
that n appears in this list. Assume that the node structure is the one defined in Section 17.5.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurrences(struct node *list, int n);

int main(void){
    struct node *head = NULL;
    struct node *current = NULL;

    for (int i = 0; i < 20; i++){
        struct node *new_node = malloc(sizeof(struct node));

        if(new_node == NULL){
            exit(EXIT_FAILURE);
        }
        new_node->value = 2;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            current->next = new_node;
        }
        current = new_node;
    }
    printf("The number appeared %d times.\n", count_occurrences(head, 2));
    return 0;
}

int count_occurrences(struct node *list, int n){
    struct node *current = list;
    int counter = 0;
    while (current != NULL) {
        if(current->value == n){
            counter++;
        }
        current = current->next;
    }
    return counter;
}