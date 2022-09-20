#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);


int main()
{
    int a, b, c, largest;
    printf("enter the numbers\n");
    a=input();
    b=input();
    c=input();
    compare(a,b, c, &largest);
    output(a, b, c, largest);
    return 0;
}



int input()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    return a;
}

void compare(int a, int b, int c, int *largest)
{

    if(a>*largest)
    *largest=a;
    if(b>*largest)
    *largest=b;
    if(c>*largest)
    *largest=c;
    
}

void output(int a, int b , int c, int largest)
{
    printf("The largest of %d %d %d \n", a, b, c);
    printf(" is ");
    printf("%d", largest);
}
