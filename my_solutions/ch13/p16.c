/*
Modify Programming Project I from Chapter 12 so that it includes the following function:
void reverse(char ‘message);
The function reverses the string pointed to by message. Hint: Use two pointers, one ini¬
tially pointing to the first character of the siring and the other initially pointing to the last
character. Have the function reverse these characters and then move the pointers toward
each other, repeating the process until the pointers meet.
*/

#include <stdio.h>
#include <string.h>
#define N 100

void reverse(char *message);

int main(void){
    char message[N];
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline if present
    char *newline = strchr(message, '\n');
    if (newline) *newline = '\0';
    reverse(message);
   
    printf("%s\n", message);
    return 0;
}

void reverse(char *message){
    char *p = message;
    char temp;
    while(*p) p++;
    p--;

    while(message < p){
        temp = *message;
        *message = *p;
        *p = temp;
        p--;
        message++;
    }
}
