#include <stdio.h>
int findMax(int *, int *);
int main()
{
    int a, b, r;
    printf("Enter 2 Numbers:\n");
    scanf("%d%d", &a, &b);
    r = findMax(&a, &b);
    printf("Grater Number is = %d", r);
    return 0;
}
int findMax(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        return *ptr1;
    }
    else
    {
        return *ptr2;
    }
}