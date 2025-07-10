#include <stdio.h>

int main()
{
    float base, height, area;

    printf(" enter the base ");
    scanf("%f", &base);

    printf(" enter the length ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf(" the area of the traingle is : %.2f\n", area);

    return 0;
}