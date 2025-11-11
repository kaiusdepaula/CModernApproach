/*
Write the following function:
int *create_array(int n, int initialvalue);
The function should return a pointer to a dynamically allocated int array with n members,
each of which is initialized to ini tial_value. The return value should be NULL if the
array can't be allocated.
*/

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initialvalue);

int main(void){
    int initial_value = 2, n = 100;
    int *dynamic_array = create_array(n, initial_value);
    if (dynamic_array == NULL){
        printf("Could not allocate %d bytes of memory.\n", n*sizeof(int));
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf("%d", dynamic_array[0]);
    }
    free(dynamic_array);
    printf("\n");
    return 0;
}
int *create_array(int n, int initialvalue){
    int *p = malloc(n * sizeof(int));
    if(!p){
        return NULL;
    }
    for(int i = 0; i < n; i++){
        p[i] = initialvalue;
    }
    return p;
}