#include <stdio.h>
#include <string.h>
int main()
{
  char str1[30] ,str2[30];
  printf("Enter the first strings");
  scanf("%s",&str1);
  printf("Enter the second strings");
  scanf("%s",&str2);

  int result=strcmp(str1,str2);

  if (result>0)
    printf("First string %s is greater than the second string %s\n",str1,str2);
  else if (result<0)
    printf("Second string %s is greater than the first string %s\n",str2,str1);
  else 
    printf("Both strings are equal ");

  return 0;

  
}