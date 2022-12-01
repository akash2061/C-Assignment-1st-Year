#include <stdio.h>
float in(float, float, float);
int main()
{
    float p, r, t, i;
    printf("Enter the Principal: ");
    scanf("%f", &p);
    printf("Enter the Rate (in %%): ");
    scanf("%f", &r);
    printf("Enter the Time (in year): ");
    scanf("%f", &t);
    i = in(p, r, t);
    printf("Intrust = %.2f", i);
    return 0;
}

float in(float p, float r, float t)
{
    float i = (p * r * t) / 100;
    return i;
}