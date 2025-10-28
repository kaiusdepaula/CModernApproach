/*
Modify Programming Project 15 from Chapter 8 so dial it includes the following function:
void encrypt(char ‘message, int shift);
The function expects message to point to a string containing the message to be encrypted;
shift represents the amount by which each letter in the message is to be shifted.
*/

#include <stdio.h>
#include <ctype.h>

void encrypt(char *message, int shift);

int main(void) {
    char message[80], letter;
    int shift_amount;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < (sizeof(message) / sizeof(message[0])); i++) {
        letter = getchar();
        if (letter == '\n') {
            break;
        }
        message[i] = letter;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    encrypt(message, shift_amount);
    printf("Encrypted message: %s\n", message); 
    return 0;
}

void encrypt(char *message, int shift) {
    while (*message){
        if (isalpha(*message)) {
            if (isupper(*message)) {
                *message = ( (*message - 'A') + shift) % 26 + 'A';
            } else {
                *message = ( (*message - 'a') + shift) % 26 + 'a';
            }
        }
        message++;
    }
}