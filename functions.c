#include <stdio.h>

// function prototyope;

int sum(int, int);

// function definition ;
int sum(int x, int y)
{
   
    return x + y;
}

int main()
{

    int a = 1;
    int b = 4;
    int c = sum(a, b);
    printf(" the value of c is %d\n", c);

    int d = 4;
    int e = 7;
    int c1 = sum(d, e);
    printf(" the value of c1 is %d\n", c1);

    return 0;
}