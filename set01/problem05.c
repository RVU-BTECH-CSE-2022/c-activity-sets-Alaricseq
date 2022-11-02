#include <stdio.h>
int main()
{
  int a ,b, c;
  printf("Enter 3 numbers:");
  scanf("%d%d%d", &a,&b,&c);

  int res = largest(a,b,c);
  printf("Largest number %d",res);
}
int largest(int x , int y, int z)
{
  if (x >=y && x >= z)
    return x;
  else if (y >=z && y >= z)
    return y;
  else 
    return z;
  
}