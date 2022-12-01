#include<stdio.h>
int main(){
  int B,A;
  printf ("Enter a number: \n");
  scanf("%d",&B);
  A = B%5;
  if(A==0){
    printf("Number is divisible by 5.\n\n");
  }else{
    printf ("Number is not divisible by 5.\n\n");
}
return 0;
}
