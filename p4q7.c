#include <stdio.h>

int main()
{

    int sum = 0;

    for (int i = 1; i <= 10; i++)

    {
        sum += 10 * i;
    }
    printf("the sum of multiplication table of 10 is : %d", sum);

    return 0;
}