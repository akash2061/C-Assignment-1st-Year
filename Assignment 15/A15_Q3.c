#include <stdio.h>
int fn(int);
int main()
{
    int i, t;
    printf("Enter a Number: ");
    scanf("%d", &i);
    t = fn(i);
    printf("%d", t);
    return 0;
}
int fn(int i)
{
    int t = i % 2;
    if (t == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}