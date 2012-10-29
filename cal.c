/* Basic Calculator in C 

Operations supported:
1. Addition

*/
#include <stdio.h>

int main(int argc, char *argv[])
{
  float a,b;

  printf("Enter two numbers:: ");
  scanf("%f %f", &a,&b);

  printf("The addition of %f and %f is:: %f\n", a,b,a+b);
  
  return 0;
}
