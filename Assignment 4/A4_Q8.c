#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE DISTANCE(IN KMS) WHICH HAS TO CONVERTED IN MILIMETER \n");
    scanf("%d", &a);
    printf("%d", a * 1000000);
    printf("millimeters");
    return 0;
}