#include <stdio.h>

int main()
{

    for (int i = 0; i < 20; i++)
    {
        if (i == 10)
        {
            continue;
        }

        printf("%d\n", i);
    }

    printf(" for loop is done\n");

    return 0;
}