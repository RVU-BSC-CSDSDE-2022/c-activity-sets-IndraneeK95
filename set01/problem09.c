#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float inp, sqrrt;
    inp=input();
    sqrrt=square_root(inp);
    output(inp,sqrrt);
    
}

float input()
{
    float inp;
    printf("enter the number\n");
    scanf("%f", &inp);
    return inp;
}

float square_root(float n)
{
    return(sqrt(n));
}

void output(float n, float sqrroot)
{
   printf("the squareroot of %f", n);
   printf("  is  %f", sqrroot);
}
