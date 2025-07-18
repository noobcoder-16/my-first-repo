#include <stdio.h>

int multiplication(int a, int b, int c);
int multiplication(int a, int b, int c)
{

    return a * b * c;
}

int main()
{

    int a = 5;
    int b = 6;
    int c = 5;

    multiplication(a, b, c);

    printf(" the multiplication of 3 numbers are : %d\n", multiplication(a, b, c));

    return 0;
}