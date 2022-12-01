#include <stdio.h>
int main()
{
  int f,c;
  printf("Enter temperature in F:\n");
  scanf("%d",&f);
  c= 5.0/9 * (f-32);
  printf("Temperature in Celsius is %d.\n",c);
  return 0;
}
