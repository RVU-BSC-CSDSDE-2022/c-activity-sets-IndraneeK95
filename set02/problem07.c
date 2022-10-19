#include <stdio.h>
#include <string.h>


void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
  int res;
  char name[100];
  input(name);
  res=has_nice_name(name);
  output(res);
  return 0;
}


void input(char *name)
{
  printf("Enter the name of the camel\n");
  scanf("%s", name);
}

int has_nice_name(char *c)
{
  int length=strlen(c);
  int i=0, count_vowels=0, count_conso=0;
  for(i=0;i<length;i++)
    {
          if((c[i]=='a')||(c[i]=='A')||(c[i]=='e')||(c[i]=='E')||(c[i]=='i')||(c[i]=='I')
            ||(c[i]=='o')||(c[i]=='O')||(c[i]=='u')||(c[i]=='U'))
            {
                count_vowels++;
            
            }
      else
           count_conso++;
    }
  if((count_vowels>=2)&&(count_conso>=2))
    return 1;
  else
    return 0;
}

void output(int res)
{
  if(res==1)
    printf("The camel has a nice name\n");
  else
    printf("The camel does not have a nice name\n");
}