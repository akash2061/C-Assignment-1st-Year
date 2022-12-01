#include <stdio.h>
int main()
{
    int a;
    int e;
    printf("ENTER THE TEMPERATURE IN FAHRENHEIT \n");
    scanf("%d", &a);
    e = (a - 32) * 5 / 9;
    printf("CONVERTED TEMPERATURE IN CENTIGRADE DEGREE IS %d", e);
    return 0;
}