#include<stdio.h>
int main()
{
  float c,cm,in,mm;
  printf ("Enter the distance between 2 cities: \n");
  scanf("%f",&c);
  cm= c*100000;
  mm= cm*10;
  in= c*39370.079;
  printf("Distance in centimeters = %.3f cm.\n",cm);
  printf("Distance in millimeters = %.3f mm. \n",mm);
  printf("Distance in inchs = %.3f inch.\n",in);
  return 0;
}
