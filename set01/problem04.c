#include <stdio.h>
int  input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);


int main()
{
    int a, b, sum;
    printf("please enter the inputs\n");
    a=input();
    b=input();
    add(a,b, &sum);
    output(a, b, sum);
}
int input()
{
    int a;
    printf("enter the  number to add\n ");
    scanf("%d", &a);
    return a;
}


void add(int a, int b, int *c)
{
    
    *c= a + b;
    

}

void output(int a, int b, int sum)
{
    printf("The sum of %d %d", a,b);
    printf(" is ");
    printf("%d", sum);
}
