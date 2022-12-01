#include <stdio.h>
int main()
{
  int a,n;
  printf("Enter nth number: \n");
  scanf("  %d",&n);
  printf("Natural number starting from 1 to %d: \n",n);
  for(a=1;a<=n;a=a+1)
  {
    printf("%d\n",a);
  }
  return 0;
}
