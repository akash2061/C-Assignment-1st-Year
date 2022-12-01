#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE DISTANCE(IN KMS) WHICH HAS TO CONVERTED IN CENTIMETER \n");
    scanf("%d", &a);
    printf("%d", a * 100000);
    printf("centimeters");
    return 0;
}