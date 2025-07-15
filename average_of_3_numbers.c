#include <stdio.h>

float average();

float average(int a, int b, int c)
{
    return (a + b + c)/ 3;
}

int main()
{
    int a;
    int b;
    int c;
 

    printf(" enter the value of a is :");
    scanf("%d", &a);

    printf(" enter the value of b is :");
    scanf("%d", &b);

    printf(" enter the value of c is :");
    scanf("%d", &c);

    average(a,b,c);


    printf(" the average value is : %.2f\n", average(a,b,c));

    return 0;
}