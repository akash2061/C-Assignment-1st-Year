#include <stdio.h>
int main()
{
    int i, n, a;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter Element of array 1:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("NOW WE WILL PRINT ARRAY 2: \n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr2[i]);
    }
    return 0;
}