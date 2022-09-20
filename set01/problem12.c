#include <stdio.h>

struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add_complex(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex sum);


int main()
{
	int n;
	Complex c[n];
	Complex sum={0,0};
	n=get_n();
	input_n_complex(n,c[n]);
	sum=add_n_complex(n,c[n]);
	output(n,c[n],sum);
}


int get_n()
{
    int n;
    printf("Enter how many numbers to add\n");
    scanf("%d", &n);
    return n;
}


Complex input_complex()
{
    Complex a;
    printf("Enter the real and imaginary parts of the complex number\n");
    scanf("%f", &a.real);
    scanf("%f", &a.imaginary);
    return a;
    
}

void input_n_complex(int n, Complex c[n])
{
    int i=0;
    for(i=0;i<n;i++)
    {
        c[i]=input_complex();
    }
}



Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
    Complex sum={0,0};
    i=0;
    for(i=0;i<n;i++)
    {
        sum=add_complex(sum,c[i]);
      }
      return sum;
    }

void output( int n, Complex c[n], Complex sum)
{
	for ( int i = 0; i < n; i++)
		print( "(%f + i %f ) + \n",c[i].real,c[i].imaginary);
	printf("(%f + i%f) =\n",c[n].real,c[n].imaginary);
	printf("(%f + i%f)\n",sum.real,sum.imaginary)

}
