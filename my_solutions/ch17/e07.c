/*
The following loop is supposed to delete all nodes from a linked list and release the memory
that they occupy. Unfortunately, the loop is incorrect. Explain what’s wrong with it and
show how to fix the bug.
for (p = first; p != NULL; p = p->next)
    free(p);

If we start freeing head, we lose references to the rest of the list. One thing to make this work
is to free the node AFTER going through it.

struct node *p, *next;
for (p = first; p != NULL; p = next) {
    next = p->next;  
    free(p);         
first = NULL; 
*/

int main(void){
    return 0;
}