#include <stdio.h>
#include <math.h>

float force(float);
  
float force (float mass)
{

  return 9.8 * mass;
}

int main()
{

  float mass = 100;
  
  float FOA;

  FOA = force(mass);

  printf(" the FOA is : %.2f\n", FOA);

  return 0;
}
