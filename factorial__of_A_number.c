#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;

    printf(" enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        factorial *= i;
    }
    printf(" the factiorial of the number is : %d\n", factorial);

    return 0;
}