/*
Show what the following program will look like after preprocessing. Some lines of the pro¬
gram may cause compilation errors; find all such errors.
#define N = 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) ((x)*(x))
#de fine CUBE (x) (SQR(x)Mx))
#define Ml(x,y) x##y
#define M2(x,y) #x #y
int main(void)
{
int a[N], i, j, k, m;
#ifdef N
i = j;
#else
• •
d = i;
#endif
i = 10 * INC(j);
i = SUB(j, k);
i = SQR(SQR(j));
i = CUBE(j);
i = Ml(j, k);
puts(M2(i, j));
#undef SQR
i = SQR(j) ;
#define SQR
i = SQR(j);
return 0;
}
*/
#include <stdio.h>
#define N 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)* (x))
#define Ml(x,y) x##y
#define M2(x,y) #x #y

int main(void) {
    int a[10], i, j, k, m;
    i = j;
    i = 10 * (j+1);
    i = j - k;
    i = j * j * j * j;
    i = j * j * j;
    puts(M2(i, j));
    i = SQR(j);
    return 0;
}