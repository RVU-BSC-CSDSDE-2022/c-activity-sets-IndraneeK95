#include <stdio.h>


int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n, sum;
    n=input();
    sum=sum_n_nos(n);
    output(n,sum);
}
int input()
{
  int n;
  printf("Enter the value of n whose sum has to be found\n");
  scanf("%d", &n);
  return n;
}

int sum_n_nos(int n)
{
    int sum=0;
    sum=(n*(n+1))/2;
    return sum;
}

void output(int n, int sum)
{
    printf("The sum of %d ",n);
    printf(" numbers is %d",sum);
}
  
