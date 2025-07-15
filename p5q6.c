#include <stdio.h>

int natural_numbers(int);

int natural_numbers(int n)
{

    // sum(n) = 1+2+3+4+5+....+(n-1)+n;
    // sum(n) = (n-1)+n;

  
    if (n == 1)
        return 1;
    else
        return  natural_numbers(n - 1)+n;


}

int main()
{
    int n=6;
    int result;

    result = natural_numbers(n);

    printf(" the sum of %d natural numbers is  : %d\n", n,result);

    return 0;
}