#include <stdio.h>
int main()
{
    int i, j, k, n, n1, n2;
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
    printf("Elements of Array C:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (a[i] < b[j])
                {
                    c[k] = a[i];
                    i++;
                }
                else
                {
                    c[k] = b[j];
                    j++;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}