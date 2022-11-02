#include <stdio.h>
int largest(int *x , int *y , int *z )
{
  if (*x >=*y && *x >= *z)
    printf(*x);
  else if (*y >=*z && *y >= *z)
    return *y;
  else 
    return *z;
}
int main(void)
{
  int a, b, c;
  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);
  int res =largest(&a,&b,&c);
  printf("The largest number is %d",res);
  return 0;

  
}

