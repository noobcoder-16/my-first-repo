#include <stdio.h>

int main()
{
    int length, width, perimeter;

    printf(" enter the length ");
    scanf("%d", &length);

    printf("enter the width ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);

    printf(" the perimeter of the reactangle is : %d\n", perimeter);

return 0;
}