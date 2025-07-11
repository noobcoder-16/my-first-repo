#include <stdio.h>

int main()
{

    for (int i = 0; i < 15; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d\n", i);
    }

    printf(" for loop is done\n");

    return 0;
}