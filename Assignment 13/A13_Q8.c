#include<stdio.h>
void c();
int main()
{
    c();
    return 0;
}

void c()
{
    float f,n;
    printf("Enter a Real Number: ");
    scanf("%f",&f);
    n = f*(-1);
    printf("%.2f",n);
}