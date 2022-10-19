#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
  int n;
  n=input_n();
  float avg;
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  return n;
  }

void input(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
    printf("Enter the number\n");
    scanf("%d", &a[i]);
      }
}

float odd_average(int n, int a[n])
{
  int i=0,count=0;
  float sum=0,avg=0;
  for(i=0;i<n;i++)
    {
      if((a[i]%2)!=0)
      {
        
        sum=sum+a[i];
        printf("%f\n", sum);
        count++;
        }
    }
  printf("sum is %f", sum);
  printf("count is %d", count);
  avg=sum/count;
  return avg;
}

void output(float avg)
{
  printf("The average of all the odd elements is %f", avg);
  }