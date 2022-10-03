#include <stdio.h>

struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);


int main()
{
	Complex a,b,c;
	a=input_complex();
	b=input_complex();
	c=add_complex(a,b);
	output(a,b,c);
}


Complex input_complex()
{
    Complex a;
    printf("Enter the real and imaginary parts of the complex number\n");
    scanf("%f", &a.real);
    scanf("%f", &a.imaginary);
    return a;
    
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=(a.real+b.real);
    sum.imaginary=(a.imaginary+b.imaginary);
    return sum;
}

void output( Complex a, Complex b, Complex sum)
{
	printf("The sum of (%d +  %di) + (%d +  %di) is (%d + %di)\n",(int)a.real, (int)a.imaginary, (int)b.real, (int)b.imaginary, (int)sum.real, (int)sum.imaginary); 
}
