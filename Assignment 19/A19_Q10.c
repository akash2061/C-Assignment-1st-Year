#include <stdio.h>
int main()
{
    int i, j, n, n1, n2;
    printf("Enter the size of Array A:\n");
    scanf("%d", &n1);
    printf("Enter the size of Array B:\n");
    scanf("%d", &n2);
    int a[n1], b[n2];
    n = n1 + n2;
    int c[n];
    printf("Enter the Elements of Array A:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Elements of Array B:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Elements of Array C in Descending Order:\n");
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    // Sorting of array C.
    for (int i = 0; i < n; i++)
    {
        int T;
        for (int j = i + 1; j < n; j++)
        {
            if (c[i] < c[j])
            {
                T = c[i];
                c[i] = c[j];
                c[j] = T;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}