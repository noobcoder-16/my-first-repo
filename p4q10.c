#include <stdio.h>
#include <math.h>
int main()
{

    int n;

    int not_Prime = 0;

    printf("enter the number ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {

        not_Prime = 1;
    }
    else
    {

        int i = 2;

        do
        {

            if (n % i == 0 && n != 2)
            {
                not_Prime = 1;
                break;
            }
            i++;

        } while (i < n);
    }
    if (not_Prime)
    {
        printf("%d is  not a Prime number \n", n);
    }
    else
    {

        printf(" %d is  a Prime number \n ", n);
    }

    return 0;
}

// you can try these loops to run  the code :::
 
/*  while (i < n

        {

            if (n % i == 0 && n != 2)
            {
                not_Prime = 1;
                break;
            }
            i++;

        }*/


        /*  for (int i=2 ; i<n ; i++)
        {

            if (n % i == 0 && n != 2)
            {
                not_Prime = 1;
                break;
            }
           

        } 
        */