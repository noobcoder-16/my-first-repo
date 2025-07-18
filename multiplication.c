#include <stdio.h>

int multiplication(int a, int b, int c);
int multiplication(int a, int b, int c)
{

    return a * b * c;
}

int main()
{

    int a = 2;
    int b = 1;
    int c = 5;

    multiplication(a, b, c);

    printf(" the multiplication of 3 numbers are : %d\n", multiplication(a, b, c));

    return 0;
}