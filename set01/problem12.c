#include<stdio.h>
 struct Complex{
  int real,img;};
int main()
{
  int n,i;
  printf("Enter number of Complex number to be added\n");
  scanf("%d",&n);
  struct Complex c[n],total;
  total.real=0;
  total.img=0;
  for(i=0;i<n;i++)
  {
    printf("Enter real part of %d number\n",i+1);
    scanf("%d3",&c[i].real);
    printf("Enter imaginary part of %d number\n",i+1);
    scanf("%d",&c[i].img);
    total.real+=c[i].real;
    total.img+=c[i].img;
  }

  if(total.img>=0)
     printf("%d+%di\n",total.real,total.img);
  else
     printf("%d%di\n",total.real,total.img);
  printf("Sum of Complex numbers are:\n")

  return 0;
}