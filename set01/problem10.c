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
    printf("First string is greater than the second string\n");
  else if (result<0)
    printf("Second string is greater than the first string\n");
  else 
    printf("Both strings are equal ");

  return 0;

  
}