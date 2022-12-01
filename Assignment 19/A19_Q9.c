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
    printf("Elements of Array C:\n");
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }

    // for (i = 0, j = n1; j < n && i < n2; i++, j++)
    // {
    //     c[j] = b[i];
    // }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", c[i]);
    }

    /**
     *!  use this for sorting
     ** for (int i = 0; i < n; i++)
     ** {
     **    int temp;
     **    for (int j = i + 1; j < n; j++)
     **    {
     **      if (c[i] > c[j])
     **      {
     **        temp = c[i];
     **        c[i] = c[j];
     **        c[j] = temp;
     **      }
     **    }
     ** }
     */

    return 0;
}