/*
Rewrite the make_empty, is empty. and is_f ull functions of Section 10.2 to use the
pointer variable top_ptr instead of the integer variable top.
*/

#include <stdbool.h>
#define STACK_SIZE 100

void make_empty(int contents[STACK_SIZE], int **top_ptr);
bool is_empty(int contents[STACK_SIZE], int **top_ptr);
bool is_full(int contents[STACK_SIZE], int **top_ptr);
// void push(int i, int contents[STACK_SIZE], int **top_ptr);
// int pop(int contents[STACK_SIZE], int **top_ptr);

int main(void){
    int contents[STACK_SIZE];
    int *top_ptr = &contents[0];
    make_empty(contents, &top_ptr);
    return 0;
}
// I've used a more advanced topic which is pointers to pointers
// I guess, the author meant for this exercise was to use 
// pointers as args and return a pointer.
void make_empty(int contents[STACK_SIZE], int **top_ptr) {
    *top_ptr = &contents[0];
}
bool is_empty(int contents[STACK_SIZE], int **top_ptr) {
    return *top_ptr == &contents[0];
}
bool is_full(int contents[STACK_SIZE], int **top_ptr) {
    return *top_ptr - &contents[0] == STACK_SIZE;
}
