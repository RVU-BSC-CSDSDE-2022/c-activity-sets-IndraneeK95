#include <stdio.h>
#include <string.h>


void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
   int k;
   char string1[100], string2[100];
   input_two_strings(string1, string2);
    k=stringcompare(string1, string2);
    output(string1, string2, k);
   
   
}




void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}


int stringcompare(char *string1, char *string2)
{
  int i,j=0,sum1=0,sum2;
  int len1=strlen(string1);
  int len2=strlen(string2);
  for(i=0,j=0; i<len1&&j<len2;i++,j++)
    {
     sum1=sum1+string1[i] ;
     sum2=sum2+string2[j];
    }
  if(sum1==sum2)
    return 0;
  else if(sum1>sum2)
    return -1;
  else if(sum1<sum2)
    return -2;
}

void output(char *string1, char *string2, int result)
{
  if(result==0)
    printf("%s is equal to %s", string1, string2);
  else if(result==-1)
    printf("%s is greater than %s", string1, string2);
  else if(result==-2)
    printf("%s is smaller than %s", string1, string2);
}