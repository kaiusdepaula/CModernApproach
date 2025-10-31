/*
Functions can often—but not always—be written as parameterized macros. Discuss what
characteristics of a function would make it unsuitable as a macro.

There are many issues with writing functions as macros. By starters, debugging the preprocessor might
prove a difficult task and some bugs may be hard to identify. Arguments passed on these functions
may have some side effects, for example calling f(x++) in a macro will increment x everytime it is used.
There are no pointers to the function or to the local scope of a macro.
If the logic is too complex, the function might be difficult to read and maintain.
*/

int main(void){
    return 0;
}

