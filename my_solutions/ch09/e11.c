/*
Write the following function:
float compute_GPA(char grades [], int n);
The grades array will contain letter grades (A. B, C. D. or F. either upper-case or lower¬
case); n is the length of the array. The function should return the average of the grades
(assume that A = 4, B = 3, C = 2. D = 1, and F = 0)
*/

#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void) {
    char grades[] = {'A', 'F', 'C', 'D', 'B'};
    int n = sizeof(grades) / sizeof(grades[0]);

    printf("The grades are: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", grades[i]);
    }
    printf("\nThe GPA for those grades is: %.2f\n", compute_GPA(grades, n));
    return 0;
}

float compute_GPA(char grades[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
       switch (grades[i]) {
        case 'A':
            sum += 4;
            break;
        case 'B':
            sum += 3;
            break;
        case 'C':
            sum += 2;
            break;
        case 'D':
            sum += 1;
            break;
        case 'F':
            sum += 0;
            break;
        default:
            printf("Unregistered grade!");
            return 1.0;
            break;
        } 
    }
    return (float) sum / n;
}
