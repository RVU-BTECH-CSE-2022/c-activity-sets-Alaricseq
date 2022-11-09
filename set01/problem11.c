git#include <stdio.h>
struct complex 
{ int real ,img;
};
int main()
{
  struct complex a,b,c;

  printf("Enter a and b where a + ib is the First complex number.\n");
  scanf("%d%d",&a.real,&a.img);
  printf("Enter c and d where c + id is the Second complex number.\n");
  scanf("%d%d",&b.real,&b.img);

  c.real=a.real + b.real;
  c.img=a.img + b.img;

  printf("The sum of 2 complex numbers are %d + %di\n",c.real,c.img);

  return 0;


}