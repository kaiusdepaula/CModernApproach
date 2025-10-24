/*
Write the following function:
void get extension(const char *file_name, char ‘extension);
file_name points to a string containing a file name. The function should store the exten¬
sion on the file name in the string pointed to by extension. For example, if the file name
is "memo.txt", the function will store "txt" in the string pointed to by extension. If
the file name doesn’t have an extension, the function should store an empty string (a single
null character) in the string pointed to by extension. Keep the function as simple as pos¬
sible by having it use the strlen and strcpy functions.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void get_extension(const char *file_name, char *extention);

int main(void){
    char file_name[50] = "memo.txt", extention[50];
    get_extension(file_name, extention);
    printf("%s", extention);
    return 0;
}

void get_extension(const char *file_name, char *extention){
    for(; *file_name != '\0'; file_name++){        
        if (*file_name == '.'){
            strcpy(extention, file_name+1);
            break;
        }
    }
    extention[strlen(extention)] = '\n';
}
