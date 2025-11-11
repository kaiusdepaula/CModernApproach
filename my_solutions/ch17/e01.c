/*
Having to check the return value of malloc (or any other memory allocation function)
each time we call it can be an annoyance. Write a function named my_malloc that serves
as a “wrapper” for malloc. When we call my__malloc and ask it to allocate n bytes, it in
turn calls malloc, tests to make sure that malloc doesn't return a null pointer, and then
returns the pointer from malloc. Have my__malloc print an error message and terminate
the program if malloc returns a null pointer.
*/

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int bytes){
    void *p = malloc(bytes);
    if(!p){
        printf("Malloc is not able to allocate %d bytes!\n", bytes);
        exit(1);
    }
    return p;
}

int main(void){
    // Successful allocation
    int *numbers = my_malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
        numbers[i] = i * 10;

    printf("Allocated and initialized array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    free(numbers);

    // Intentional failed allocation (try to allocate an absurdly large block)
    printf("Now forcing a failed allocation...\n");
    my_malloc(1e12); // 1 terabyte (likely to fail)

    return 0;
}