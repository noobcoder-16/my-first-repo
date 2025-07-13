#include <stdio.h>
#include <math.h>

float n, area;

int main()
{
    printf("enter the side of the sqaure ");
    scanf("%f", &n);

    area = pow(n, 2);

    printf("the area of sqaure is : %.2f\n ", area);

    return 0;
}