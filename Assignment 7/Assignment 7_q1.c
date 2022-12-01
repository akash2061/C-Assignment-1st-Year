#include <stdio.h>
int main()
{
  int i,l;
  printf("Enter 1st number: \n");
  scanf("%d",&i);
  printf("Enter 2st number: \n");
  scanf("%d",&l);
  if(i>=l){
    printf("Grater number is %d. \n",i);
  }
  else{
    printf("Grater number is %d.\n",l);
  }
  return 0;
}
