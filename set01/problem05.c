#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);


int main()
{
    int a, b, c, largest;
    printf("enter the numbers\n");
    a=input();
    b=input();
    c=input();
    largest=compare(a,b, c);
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

int compare(int a, int b, int c)
{
    int largest=0;
    if(a>largest)
    largest=a;
    if(b>largest)
    largest=b;
    if(c>largest)
    largest=c;
    return largest;
}

void output(int a, int b , int c, int largest)
{
    printf("The largest of %d %d %d \n", a, b, c);
    printf(" is ");
    printf("%d", largest);
}
