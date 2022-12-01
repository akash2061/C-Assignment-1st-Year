#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter a = \n");
  scanf("%d",&a);
  printf("Enter b = \n");
  scanf("%d",&b);
  printf("Value before switching: a = %d and b = %d \n",a,b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("Value after switching: a = %d and b = %d. \n",a,b);
  return 0;
}
