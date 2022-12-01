#include <stdio.h>
void ractangle();
void square();
void circle();
//Compiler version gcc  6.3.0

int main()
{
  ractangle();
  square();
  circle();
  return 0;
}
void ractangle()
{
  float l,b,rarea;
  printf("L:\n");
  scanf("%f",&l);
  printf("B:\n");
  scanf("%f",&b);
  rarea = l*b;
  printf("area = %.2f\n",rarea);
  printf("Parameter = %.2f\n\n",2*(l+b));
}
void square()
{
  float s,sarea;
  printf("S:\n");
  scanf("%f",&s);
  sarea= s*s;
  printf("area = %.2f\n",sarea);
  printf("Parameter = %.2f\n\n",4*s);
}
void circle()
{
  float pi=3.141592,r,cf,carea;
  
  printf("Radius = \n");
  scanf("%f",&r);
  carea = pi*r*r;
  printf("Area = %.2f\n",carea);
  cf = 2*pi*r;
  printf("Circumference = %.2f\n\n",cf);
}
