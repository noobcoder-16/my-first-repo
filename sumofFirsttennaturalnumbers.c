  // Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main()
{

    int n;
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {

        sum = sum + i;

        i++;
    }
    printf(" the sum of first 10 natural numers is %d\n", sum);

    return 0;
}
