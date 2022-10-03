#include <stdio.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight1(Camel c);  //pass by value
//or
void find_weight2(Camel *c); //passing address variable
void output(Camel c);
```



Camel input()
{
  Camel c;
  printf("Enter the radius of the camel\n");
  scanf("%f", &c1.radius);
  printf("Enter the height of the camel\n");
  scanf("%f", &c1.height);
  printf("Enter the length of the camel\n");
  scanf("%f", &c1.length);
}

float find_weight1(Camel c)
{
   c.weight= (3.14*pow(c.radius,3))*pow((c.height*c.length),0.5);
   return c.weight;
}

void find_weight2(Camel *c)
{
   c->weight=(3.14*pow(c->radius,3))*pow((c->height*c->length),0.5);
}

void output(Camel c)
{
  printf("The weight of the camel with radius %f,height %f,length %f is: %f,", c.radius, c.height, c.length, c.weight);
}