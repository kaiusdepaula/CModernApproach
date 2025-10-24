/*
Write the following function:
bool test_extension(const char *file_name,
const char ‘extension);
file_name points to a string containing a file name. The function should return true if
the file's extension matches the string pointed to by extension, ignoring the case of let¬
ters. For example, the call test extension("memo. txt", "TXT") would return
true. Incorporate the “search for the end of a string" idiom into your function. Hint: Use
coupper lunction
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool test_extension(const char *file_name, const char *extension);

int main(void){
    char file_name[] = "memo.txt";
    printf("%d\n", test_extension(file_name, "TXT"));
    return 0;
}

bool test_extension(const char *file_name, const char *extension){
    while(*file_name && *file_name != '.'){
        file_name++;
    }
    if (!*file_name) return false;
    file_name++;

    while(*file_name && *extension){ 
        if(tolower(*file_name) != tolower(*extension)){
            return false;
        }
        file_name++;
        extension++;
    }
    return *file_name == '\0' && *extension == '\0'; 
}