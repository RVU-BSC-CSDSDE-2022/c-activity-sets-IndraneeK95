#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);


int main()
{
    float r,h,l,weight;
    input_camel_details(&r,&h,&l);
    weight=find_weight(r,h,l);
    output(r,h,l,weight);
    return 0;
}
    

void input_camel_details(float *radius, float *height, float *length)
{
    float *r,*h,*l;
    r=radius;
    h=height;
    l=length;
    printf("please enter the radius of the camel\n");
    scanf("%f", r);
    printf("please enter the height of the table\n");
    scanf("%f", h);
    printf("please enter the length of the camel\n");
    scanf("%f", l);
    
}

float find_weight(float radius, float height, float length)
{

    float wei= (3.14*pow(radius,3))*pow((height*length),0.5);
    return wei;
    printf("weight is %f", wei);
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %f, height: %f, length : %f is: %f", radius, height, length, weight );
}
