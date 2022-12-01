#include<stdio.h>
int main(){
  int y;
  printf ("Enter a number: \n");
  scanf("%d",&y);
  if(y>=10){
    if(y==10){
      printf("%d is equal to 10",y);
    }else{
    printf("%d is grater then 10.\n",y);
    }
  }else{
    printf ("%d is less then 10.\n",y);
  }
  return 0;
}
