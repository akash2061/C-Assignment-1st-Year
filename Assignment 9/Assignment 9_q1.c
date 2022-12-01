#include <stdio.h>
int main()
{
  int a,r;
  printf("Enter 1st number: \n");
  scanf("%d",&a);
  printf("Enter 2st number: \n");
  scanf("%d",&r);
  if(a>500 && a<1000){
    printf("%d lies between 500-1000.\n",a);
    if(a>r){
      printf("%d is grater then %d.\n\n",a,r);
    }
  }
   if(r>500 && r<1000){
    printf("%d lies between 500-1000.\n",r);
    if(r>a){
      printf("%d is grater then %d.\n\n",r,a);
    }
  }else{
    printf("ERROR!!!\n\n");
  }
  return 0;
}
