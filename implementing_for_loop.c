// Write a program to sum first ten natural numbers implemeting for loop and do while loop//

#include <stdio.h>

int main()
{

    int n;

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {

        sum += i;
    }
    printf(" the sum of first 10 natural numers is %d\n", sum);

    /* below the code is written using do while loop , so if you run this you will get output as:
     the sum of first 10 natural numers is 55
 the sum of first 10 natural numers is 110

 and if you run the loops individually you will get the right answers of each

    */

    int i = 1;

    do
    {

        sum += i;
        i++;

    } while (i <= 10);

    printf(" the sum of first 10 natural numers is %d\n", sum);

    return 0;
}
