#include <stdio.h>
#include <math.h>

float celcius_to_farenhite(float);

float celcius_to_farenhite(float celcius)
{
    return (1.8 * celcius) + 32;
}

int main()
{

    float celcius;
    float farenhite;

    printf("enter the termperature in degree celcuis :");

    scanf("%f", &celcius);

    farenhite = celcius_to_farenhite(celcius);

    printf(" the temperature is farenhite is : %.2f\n", farenhite);

    return 0;
}