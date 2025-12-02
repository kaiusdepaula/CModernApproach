/*
Suppose that f and p are declared as follows:
struct {
    union {
        char a, b;
        int c ;
    } d;
    int e[5] ;
} f, *p = &f;
Which of the following statements are legal?
(a) p->b = ' ';
Illegal. This expression is the same as (*p).b = ' '; Since b is a member of d, we
cannot access it directly from f.

(b) p->e[3] = 10;
Legal. p points to f, f has a member e which is an array of 5 integers. The indirection done by
-> makes it possible to access members of a stuct from pointers.

(c) (*p).d.a = '*' ;
Legal. By first applying the deference operator, we access f, that has a member d, which is a union
and a is a char inside d.

(d) p->d->c = 20;
Illegal. Since we go from pointer to member inside the struct, we no longer have a pointer to
apply the indirection, so d->c is undefined behavior.

*/

int main(void){
    return 0;
}