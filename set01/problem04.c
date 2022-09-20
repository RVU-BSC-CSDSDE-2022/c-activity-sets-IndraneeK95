#include <stdio.h>
int  input();
int add(int a, int b, int *c);
void output(int a, int b, int sum);


int main()
{
    int a, b, c;
    printf("please enter the inputs\n");
    a=input();
    b=input();
    c=add(a,b, &c);
    output(a, b, c);
}
int input()
{
    int a;
    printf("enter the  number to add\n ");
    scanf("%d", &a);
    return a;
}


int add(int a, int b, int *c)
{
    
    *c= *a + *b;
    return *c;

}

void output(int a, int b, int sum)
{
    printf("The sum of %d %d", a,b);
    printf(" is ");
    printf("%d", sum);
}
