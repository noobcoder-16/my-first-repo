#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;
    int i = 1;

    printf(" enter the number :");
    scanf("%d", &n);

    while (i <= n)
    {

        factorial *= i;

        i++;
    }

    printf(" the factiorial of the n is : %d\n", factorial);

    return 0;
}