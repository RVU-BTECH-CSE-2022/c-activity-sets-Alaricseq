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
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char string1[20] , string2[20];
  input_two_strings(&string1, &string2);
}

void input_two_strings(char *string1, char *string2)
{ 
  printf("Enter the first string \n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
  stringcompare(string1,string2);  
}

int stringcompare(char *string1, char *string2)
{
  int var=0,i=0;
  while (string1[i] != '\0' && string2[i] != '\0')
    {
      
      if(string1[i] > string2[i])
      {
        var=1;
        break;
      }
      
      else if (string2[i] > string1[i])
      {
        var=-1;
        break;
      }
      i++;
    }
  
  if(var==1) 
  {printf("First string %s is greater than the second string %s\n",string1,string2);}
  else if(var==-1)
  {printf("Second string %s is greater than the first string %s\n",string2,string1);}
  return 0;
  int result = stringcompare(string1,string2);
  output(string1,string2,result);
}

void output(char *string1, char *string2, int result)
{
  printf("The output is %d",result);
}

