#include <stdio.h>

int length, breadth;
int area;

int main()
{

    printf("enter the length :");
    scanf("%d", &length);

    printf("enter the breadth: ");
    scanf("%d", &breadth);

    area = 2 * (length + breadth);

    printf(" the area of reactangle is : %d\n", area);

    return 0;
}