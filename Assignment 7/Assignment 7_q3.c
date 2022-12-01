#include<stdio.h>
int main(){
  int x;
  printf("Enter a number between 1-100: \n");
  scanf("%d",&x);
  if(x>50 && x<100){
    printf("SUCCESS!!!\n\n");
  }else{
    printf ("FAIL.\n\n");
  }
  return 0;
}
