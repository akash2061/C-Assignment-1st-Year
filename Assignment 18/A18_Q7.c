#include <stdio.h>
int main()
{
    int i, j = 0, n, s = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the Numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    s = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > s)
        {
            j = s;
            s = a[i];
        }
        // else if (a[i] > j && a[i] < s)
        // {
        //     j = a[i];
        // }
    }
    printf("2nd Largest Number = %d\n", j);
    return 0;
}