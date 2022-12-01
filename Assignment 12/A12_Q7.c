#include <stdio.h>
int main()
{
    int i, a;
    printf("Enter No. to print natural no. in reverse:\n");
    scanf("%d", &i);
    while (i > 0, i--)
    {
        a = i + 1;
        printf("%d\n", a);
    }
    return 0;
}