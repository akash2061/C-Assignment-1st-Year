#include<stdio.h>
int main(){
  float a,b,c,p,q,r;
  //extra line...
  printf("Assignment 9_Q7.\n");
  printf("Enter 1st side of triangle.\n");
  scanf("%f",&a);
  printf("Enter 2nd side of triangle.\n");
  scanf("%f",&b);
  printf("Enter 3rd side of triangle.\n");
  scanf("%f",&c);
  p=a+b;
  q=a+c;
  r=b+c;
  if(a<=r && b<=q && c<=p){
  if(a==b && b==c){
    printf("It's an Equilateral Triangle.\n");
  }else if(a==b && a!=c){
    printf("It's an Isosceles Triangle.\n");
  }else if(a!=b && b!=c && c!=a){
    printf("It's a Scalene Triangle.\n");
  }
  }else{
    printf("It's not a valid triangle. \n\n");
  }
  return 0;
}
