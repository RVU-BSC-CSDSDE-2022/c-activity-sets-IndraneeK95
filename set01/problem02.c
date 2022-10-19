#include <stdio.h>

int main() {
    int a, b, sum;
    printf("enter two numbers to add\n");
    if(scanf("%ddonkey%d", &a, &b) < 2) {
      printf("Input Error\n");
      return -1;
    }
    sum=a+b;
    printf("The sum of %d and %d is %d\n and count = %d\n",a,b, sum,count);
    return 0;
}
