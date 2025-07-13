#include <stdio.h>
#include <math.h>

float raduis, pi, circumference;
float pi = 3.14;

int main()
{

    printf("enter the radius :");
    scanf("%f", &raduis);

    circumference = 2 * pi * raduis;
    printf(" circumference of the circle is: %.2f\n", circumference);
    return 0;
}