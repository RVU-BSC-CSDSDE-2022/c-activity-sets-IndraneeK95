#include <stdio.h>
int  input();
int add(int *a, int *b);
void output(int a, int b, int sum);


int main()
{
    int a, b, sum;
    printf("please enter the inputs\n");
    a=input();
    b=input();
    sum=add(&a,&b);
    output(a, b, sum);
}
int input()
{
    int a;
    printf("enter the  number to add\n ");
    scanf("%d", &a);
    return a;
}


int add(int *a, int *b)
{
    int sum;
    sum= *a + *b;
    return sum;

}

void output(int a, int b, int sum)
{
    printf("The sum of %d %d", a,b);
    printf(" is ");
    printf("%d", sum);
}
