#include <stdio.h>

int main()
{
    int i = 1 , n;

    

    printf("enter the number ");
    scanf("%d", &n);

    do
    {
        printf(" the natural numbers are : %d\n", i);

        i++;

    } while (i <= n);

    return 0;
}