/*
    Computing the volume of a sphere in a euclidean space.
*/
#include <stdio.h>


const float PI = 3.14f;
const float SCALE_FACTOR = (4.0f / 3.0f);
int main(void) {
    float radius = 0;
    printf("Please provide a value for radius:\n");
    scanf("%f", &radius);
    printf("The volume is: %f", SCALE_FACTOR * PI * radius * radius * radius);
    return 0;
}
