#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float radius, height, length;
  int mood;
  input_camel_details(&radius, &height, &length);
  mood=find_mood(radius, height, length);
  output(radius, height, length, mood);
}






void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the camel radius\n");
  scanf("%f", radius);
  printf("Enter the camel height\n");
  scanf("%f", height);
  printf("Enter the camel length\n");
  scanf("%f", length);
}

int find_mood(float radius, float height, float length)
{
    if((radius<height)&&(radius<length))
      return 1;
    if((height<radius)&&(height<length))
      return 2;
    if((length<radius)&&(length<height))
      return 3;
}

void output(float radius, float height, float length, int mood)
{
  if(mood==1)
    printf("The Camel is Sick\n");
  if(mood==2)
    printf("The Camel is Happy\n");
  if(mood==3)
    printf("The Camel is Sad\n");
  }
