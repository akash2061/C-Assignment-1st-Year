#include <stdio.h>
int main()
{ int f;
  printf("Enter a number: \n");
  scanf("%d",&f);
  printf("One's place is %d.\n",f%10);
  printf("Tenth's place is %d.\n",(f/10)%10);
  return 0;
}
