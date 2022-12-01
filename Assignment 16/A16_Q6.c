#include <stdio.h>
// factorial number calculation.
int fk(int);
int main()
{
    int a, f;
    printf("Enter a Number: ");
    scanf("%d", &a);
    f = fk(a);
    printf("%d", f);
    return 0;
}
int fk(int a)
{
    int f = 1;
    for (int n = 1; n <= a; n++)
    {
        f *= n;
    }
    return f;
}
