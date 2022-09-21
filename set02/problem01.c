#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);


Point input()
{
    Point p;
    printf("Enter the x coordinate\n");
    scanf("%f", &(p.x));
    printf("Enter the y coordinate\n");
    scanf("%f", &(p.y));
    return p;
}

void dist(Point a, Point b, float *res)
{
    float result;
    result=(pow(((b.x)-(a.x)),2));
    *res=result;
}

void output(Point a, Point b, float res)
{
    printf("The distance between (%f,%f) and (%f,%f) is %f\n", a.x,a.y, b.x,b.y,res);
}

int main()
{
    Point p1,p2;
    float res;
    float *x=&res;
    p1=input();
    p2=input();
    dist(p1,p2,x);
    output(p1,p2,res);
}
