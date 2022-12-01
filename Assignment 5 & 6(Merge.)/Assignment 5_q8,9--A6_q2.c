#include <stdio.h>
int main()
{
  float m,Percent;
  printf("Marks obtain out of 100.\n");
  scanf("%f",&m);
  Percent = (m*100)/100;
  printf("Percentage = %.2f % \n",Percent);
  if(Percent>=75 && Percent<=100)
  {
    printf("First division. \n");
  }
  else
  if(Percent>=50 && Percent<74)
  
  {
    printf("Second division. \n");
  }
  else
  if(Percent>=30 && Percent<50)
  {
    printf("Third division. \n");
  }  
  else
  {
    printf("Fali.\n");
  }
  return 0;
}
