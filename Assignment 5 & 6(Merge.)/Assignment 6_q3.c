#include <stdio.h>
int main(void)
{
  float a,b;
  printf("Enter 1st Value = \n");
  scanf("%f",&a);
  printf("Enter 2nd Value = \n");
  scanf("%f",&b);
  //use %d for integer.
  printf("Addition = %.2f\n",a+b);
  printf("Subtraction = %.2f\n",a-b);
  printf("Multiplication = %.2f\n",a*b);
  printf("Division = %.2f\n",a/b);
  return 0;
}
