#include<stdio.h>
float f(float);
int main()
{
    float i,a,x;
    printf("Enter a number: ");
    scanf("%f",&i);
    a = f(i);
    printf("%.2f",a);
    return 0;
}
float f(float i)
{
    float x=i*i*i;
    return x;
}