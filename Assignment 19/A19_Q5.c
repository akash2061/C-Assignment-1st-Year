#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter the size of array:\n");
    scanf("%d", &a);
    int ar[a];
    printf("Enter the number in the array:\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Reverse order:\n");
    for (i = a - 1; i >= 0; --i)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}