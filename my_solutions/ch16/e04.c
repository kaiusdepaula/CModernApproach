/*
Repeat Exercise 3. but this time using a type named Complex.
(a) Show how to declare a tag named complex for a structure with two members, real
and imaginary, of type double.
typedef struct{
    double real;
    double imaginary;
} Complex;
(b) Use the complex tag to declare variables named cl, c2, and c3.
Complex c1, c2, c3;
(c) Write a function named make complex that stores its two arguments (both of type
double) in a complex structure, then returns the structure.
Complex make_complex(double real, double imaginary){
    Complex temp;
    temp.real = real;
    temp.imaginary = imaginary;
    return temp;
}
(d) Write a function named add eomplex that adds the corresponding members of its
arguments (both complex structures), then returns the result (another complex structure).
Complex add_complex(stuct *complex s1, struct *complex s2){
    Complex s3;
    result.real = s1.real + s2.real;
    result.imaginary = s1.imaginary + s2.imaginary;
    return s3;
}
*/

int main(void){
    return 0;
}