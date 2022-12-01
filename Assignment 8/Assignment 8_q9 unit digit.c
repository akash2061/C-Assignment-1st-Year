#include <stdio.h>
int main()
{ int f;
  printf("Enter a number: \n");
  scanf("%d",&f);
  printf("Unit digit is %d.\n\n",f%10);
  return 0;
}
