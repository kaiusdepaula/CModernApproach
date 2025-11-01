/*
Which of the following should not be put in a header file? Why not?
(a) Function prototypes

Should and need to be put in a header file as prototypes will tell the compiler about
a function before it really knows what the function does.

(b) Function definitions

Not really. Function definitions are best to be left on the related .c files 
because we may compile them only when needed and it's best to always start a C 
program with the definition of the main function, even though it's not impossible.

(c) Macro definitions

Sure. There is also a good practice of using #ifndef FILENAME to make sure
the header file is only called once during compilation.

Once a header defining a macro is included in a translation unit, that macro is visible 
for the rest of that file during preprocessing.

(d) Type definitions

If by type definitions the book refers to typedef, sure. Type definitions are placed 
in headers so all source files using the type are consistent.

*/

int main(void){
    return 0;
}