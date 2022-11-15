// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str1[30] ,str2[30];
//   printf("Enter the first strings");
//   scanf("%s",&str1);
//   printf("Enter the second strings");
//   scanf("%s",&str2);

//   int result=strcmp(str1,str2);

//   if (result>0)
//     printf("First string %s is greater than the second string %s\n",str1,str2);
//   else if (result<0)
//     printf("Second string %s is greater than the first string %s\n",str2,str1);
//   else 
//     printf("Both strings are equal ");

//   return 0;
// }
#include <stdio.h>
int main()
{ int a = 0 ,b = 0 ;
  char str1[20];
  char str2[20];
  printf("Enter the first string \n");
  scanf("%s", &str1);
  printf("Enter the second string\n");
  scanf("%s", &str2);
  while (str1[a] != '\0')
    {
      a++;
    }
  printf("length of the string = %d\n",a);
  while (str2[b] != '\0')
    {
      b++;
    }
  printf("length of the string = %d\n",b);

  if (a==b)
    printf("First string %s is greater than the second string %s\n",str1,str2);
  else if (a != b)
    printf("Second string %s is greater than the first string %s\n",str2,str1);
  else 
    printf("Both strings are equal ");

  return 0;