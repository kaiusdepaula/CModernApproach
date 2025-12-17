/*
The following function is supposed to insert a new node into its proper place in an ordered
list, returning a pointer to the first node in the modified list. Unfortunately, the function
doesn't work correctly in all cases. Explain what's wrong with it and show how to fix it.
Assume that the node structure is the one defined in Section 17.5.
struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {
    if(list == NULL || new_node->value < list->value){
        new_node->next = list;
        return new_node;
    }
    
    struct node *prev = list;
    struct node *cur = list->next;

    while (cur != NULL && cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}