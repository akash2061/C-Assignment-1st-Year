#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter 2 Numbers:\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("After Swap:\n");
    printf("%d\n%d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}