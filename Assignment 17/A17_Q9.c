#include <stdio.h>
int main()
{
    int a[10], i;
    printf("To Escape the Loop Press '0'.\n");
    for (i = 0; i < 1; i)
    {
        printf("Enter Number:\n", i);
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            printf("THANK YOU!!!");
            break;
        }
        if (a[i] % 10 != 0)
        {
            printf("You entered: %d\n", a[i]);
        }
    }
    return 0;
}