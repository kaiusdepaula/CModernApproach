/*
Modify the delete_f rom_list function so that it uses only one pointer variable instead
of two (cur and prev).
*/

#include <stdio.h>
#include <stdlib.h>

struct node *delete_from_list(struct node *list, int n);

struct node {
    int value;
    struct node *next;
};

int main(void) {
    struct node *list = malloc(sizeof(struct node));
    list->value = 1;
    list->next = malloc(sizeof(struct node));
    list->next->value = 2;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->value = 3;
    list->next->next->next = NULL;

    printf("Original list: ");
    for (struct node *p = list; p != NULL; p = p->next)
        printf("%d ", p->value);
    printf("\n");

    list = delete_from_list(list, 2);

    printf("After deleting 2: ");
    for (struct node *p = list; p != NULL; p = p->next)
        printf("%d ", p->value);
    printf("\n");

    // Free remaining nodes
    while (list != NULL) {
        struct node *tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}


struct node *delete_from_list(struct node *list, int n) {
    struct node *cur = list;

    if(cur != NULL && cur->value ==n){
        list = cur->next;
        free(cur);
        return list;
    }
    while(cur != NULL && cur->next != NULL && cur->next->value != n){
        cur = cur->next;
    }
    if(cur == NULL || cur->next == NULL){
        return list;
    }
    
    struct node *todelete = cur->next;
    cur->next = todelete->next;
    free(todelete);

    return list;
}
