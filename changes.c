#include <stdio.h>

int changes(int a);
int change(int a)
{
    a = 89; // Misnomer
}

int main()
{

     int b = 52;
    change(b); // The value of b remains 22
    printf("b is %d", b);

    return 0;
}