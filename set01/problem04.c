#include <stdio.h>
void add(int x, int y , int *sum)
{
  *sum= x + y;
}
int main(void)
{
  int a,b,c;
  printf("Enter 2 numbers");
  scanf("%d%d",&a,&b);
  add(a,b,&c);
  printf("The sum is %d",c);
  return 0;
  
}