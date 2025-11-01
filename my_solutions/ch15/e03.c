/*
We saw that writing #include <file> instead of #include "file" may not work if file is
one that we've written. Would there be any problem with writing #include "file" instead
of #include <file> if file is a system header?

When using #include "file", the preprocessor first searches the current directory before 
searching the system directories. If a local file with the same name as a system header 
exists, it could be included by mistake. Using #include <file> ensures the compiler looks 
only in the system include directories, avoiding accidental conflicts with local files.

*/

int main(void){
    return 0;
}