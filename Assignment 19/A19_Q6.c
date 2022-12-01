#include <stdio.h>
int main()
{
    int i, j, n, k = 1, c = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the Elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // sorting in ascending order.
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    // counting the element.
    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k++;
                b[j] = 0;
            }
        }
        if (b[i] != 0)
        {
            b[i] = k;
        }
    }
    printf("Frequency of each Element:\n");
    printf("------------------\n");
    for (i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            printf(" %d\t|\t%d\n", a[i], b[i]);
        }
    }
    return 0;
}
