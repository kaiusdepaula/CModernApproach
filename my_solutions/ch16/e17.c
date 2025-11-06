/*
Suppose that b and i are declared as follows:
enum {FALSE, TRUE} b;
int i ;
Which of the following statements are legal? Which ones arc “safe” (always yield a mean¬
ingful result)?
(a) b = FALSE;
Legal and safe.
(b) b = i;
Legal, unsafe. If i not in (0,1), the result is undefined.
(c) b++;
Legal, unsafe.
(d) i = b;
Legal, safe.
(e) i = 2 * b + 1;
Legal and safe. Since b is converted to an integer when used in an arithmetic 
expression, the result is well-defined.legal, unsafe.
*/

int main(void){
    return 0;
}