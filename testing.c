#include <stdio.h>
int Sum(int a, int b, int c, int d, int k);

int Sum(int a, int b, int c, int d, int k)
{

    return a + b + c + d + k;
}

int main()
{
    int a = 3;
    int b = 7;
    int c = 4;
    int d = 9;
    int k = 100;

    Sum(a, b, c, d, k);

    printf("the sum of 5 numbers is : %d\n ", Sum(a, b, c, d, k));

    return 0;
}