#include <stdio.h>

int main()
{
    int i = 0;
    do
    {

        printf(" at least once : %d \n", i);
        i++;

    } /* code */
    while (i < 1); // at least once ;

    i = 0;
    do
    {

        printf(" at least twice : %d \n", i);
        i++;

    } while (i < 2); // at least twice;

    i = 0;
    do
    {

        printf(" at most once : %d \n", i);
        i++;

    } while (i < 4); // at most once ;

    return 0;
}