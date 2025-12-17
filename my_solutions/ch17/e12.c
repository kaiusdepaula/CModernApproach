/*
Write the following function:
struct node *find_last(struct node *list, int n) ;
The list parameter points to a linked list. The function should return a pointer to the last
node that contains n: it should return NULL if n doesn’t appear in the list. Assume that the
node structure is the one defined in Section 17.5
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n);

int main(void){
    struct node *curr = NULL;
    struct node *head = NULL;
    for(int i = 0; i < 100; i++){
        struct node *new_node = malloc(sizeof(struct node));

        if(new_node == NULL){
            exit(EXIT_FAILURE);
        }
        new_node->value = i;
        new_node->next = NULL;
        
        if(head == NULL){
            head = new_node;    
        } else {
            curr->next = new_node;
        }
        curr = new_node;
    }
    printf("The last node is at address: %p\n", (void*)find_last(head, 11));
    return 0;
}

struct node *find_last(struct node *list, int n){
    struct node *curr = list;
    struct node *last = NULL;
    while(curr != NULL){
       if(curr->value == n){
            last = curr;
       } 
       curr = curr->next;
    }
    if(last == NULL){
        printf("No entries for n in provided list!");
        return NULL;
    }
    return last;
}