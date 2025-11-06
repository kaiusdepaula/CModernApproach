/*
(a) Show how to declare a tag named complex for a structure with two members, real
and imaginary, of type double.
struct complex{
    double real;
    double imaginary;
};
(b) Use the complex tag to declare variables named cl, c2, and c3.
struct complex c1, c2, c3;
(c) Write a function named make complex that stores its two arguments (both of type
double) in a complex structure, then returns the structure.
struct complex make_complex(double real, double imaginary){
    struct complex temp;
    temp.real = real;
    temp.imaginary = imaginary;
    return temp;
}
(d) Write a function named add eomplex that adds the corresponding members of its
arguments (both complex structures), then returns the result (another complex structure).
struct complex add_complex(stuct *complex s1, struct *complex s2){
    struct complex s3;
    result.real = s1.real + s2.real;
    result.imaginary = s1.imaginary + s2.imaginary;
    return s3;
}
*/

int main(void){
    return 0;
}