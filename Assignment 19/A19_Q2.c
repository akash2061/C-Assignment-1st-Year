#include <stdio.h>
int num(int);
int main()
{
    int i, s;
    printf("Enter the size of array: \n");
    scanf("%d", &i);
    s = num(i);
    printf("Smallest number = %d\n", s);
    return 0;
}
int num(int i)
{
    int a[i], s;
    printf("Enter the element in array: \n");
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &a[j]);
    }
    s = a[0];
    for (int j = 0; j < i; j++)
    {
        if (a[j] < s)
        {
            s = a[j];
        }
    }
    return s;
}