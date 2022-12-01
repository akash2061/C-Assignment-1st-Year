#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the Numbers: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Reverse order: \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}