#include <stdio.h>
void a(int, int[]);
void d(int, int[]);
int main()
{
    int i, j;
    printf("Enter the size of array:\n");
    scanf("%d", &i);
    int ar[i];
    printf("Enter the elements of array:\n");
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &ar[j]);
    }
    a(i, ar);
    d(i, ar);
    return 0;
}
void a(int i, int ar[i])
{
    int j, c = 0;
    for (j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (ar[j] > ar[k])
            {
                c = ar[j];
                ar[j] = ar[k];
                ar[k] = c;
            }
        }
    }
    printf("Ascending order:\n");
    for (j = 0; j < i; j++)
    {
        printf("%d\n", ar[j]);
    }
}
void d(int i, int ar[i])
{
    int j, c = 0;
    for (j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (ar[j] < ar[k])
            {
                c = ar[j];
                ar[j] = ar[k];
                ar[k] = c;
            }
        }
    }
    printf("Descending order:\n");
    for (j = 0; j < i; j++)
    {
        printf("%d\n", ar[j]);
    }
}
