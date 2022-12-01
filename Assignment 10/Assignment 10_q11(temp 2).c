#include <stdio.h>
int main()
{
  int f,c;
  printf("Enter temperature in F:\n");
  scanf("%d",&f);
  c= 5 * (f-32) /9;
  printf("Temperature in Celsius is %d.\n",c);
  return 0;
}
