#include <stdio.h>

void main()
{
  int a,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  int res = sum1(a,b);
  printf("Sum is %d + %d = %d",a,b,res);

}



int sum1(int a, int b)
{
  return a+b;
}
