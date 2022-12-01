#include<stdio.h>
int main(){
	 int x,y,z;
  printf ("Enter a number: \n");
  scanf("%d",&y);
  x= y%7;
  z= y%3;
  if(x==0 && z==0){
    printf("Number is divisible by 7 and 3.\n\n");
  }else{
    printf ("Number is not divisible by 7 and 3.\n\n");
  }
  return 0;
}

