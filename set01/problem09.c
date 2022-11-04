#include <stdio.h>
#include <math.h>

int main()
{
  long double a , squareroot;
  printf("Enter a number");
  scanf("%Lf",&a);

  squareroot = sqrt(a);
  printf("Square root of %2.Lf = %2.Lf", a , squareroot);
  return 0;
  
}