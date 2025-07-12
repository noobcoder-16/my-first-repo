#include <stdio.h>

int main()
{

    int i = 10;
    int n = 10;

    while (i)
    {
        printf("%dX%d=%d\n", i, n, i * n);

        i--;
    }

    return 0;
}