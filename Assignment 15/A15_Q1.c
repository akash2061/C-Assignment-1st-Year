#include <stdio.h>
float ac(float);
int main()
{
    float a, r;
    printf("Enter the radius of circle");
    scanf("%f", &r);
    a = ac(r);
    printf("Area = %.2f", a);
    return 0;
}
float ac(float r)
{
    float p = 3.141592;
    float c = p * (r * r);
    return c;
}