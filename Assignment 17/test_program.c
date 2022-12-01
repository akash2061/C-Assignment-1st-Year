#include <stdio.h>
int sum(int arr);
int main()
{
    int i, s;
    int arr[5];
    printf("%u", sizeof(arr[4]));
    printf("Enter any 5 natural number: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        s = arr[i];
        printf("%d\n", s);
    }
    sum(arr[5]);
    return 0;
    /*    sum of array elements
        find the smallest element of array
        find the largest elements
    */
}
int sum(int arr)
{
    for (int k = 0; k < arr; k++)
    {
        printf("hi\n");
    }
}