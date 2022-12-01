#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE DISTANCE(IN KMS) WHICH HAS TO CONVERTED IN METER\n");
    scanf("%d", &a);
    printf("%d", a * 1000);
    printf("meters");
    return 0;
}