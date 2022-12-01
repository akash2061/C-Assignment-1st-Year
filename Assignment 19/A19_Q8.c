#include <stdio.h>
int main()
{
    int i, j, n, c;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the number in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unique number in array:\n");
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    c++;
                }
            }
        }
        if (c == 0)
        {
            printf("%d \n", a[i]);
        }
    }
    return 0;
}