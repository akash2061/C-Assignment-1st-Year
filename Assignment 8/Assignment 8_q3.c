#include <stdio.h>
int main()
{
  int a,b,c;
  printf ("Enter a number: \n");
  scanf("%d",&b);
  a = b%3;
  c = b%2;
  if(a==0 && c==0){
    printf("Number is divisible by 3 and 2.\n\n");
  }else{
    printf ("Number is not divisible by 3 and 2.\n\n");
}
return 0;
}
