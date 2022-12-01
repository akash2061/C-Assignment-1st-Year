#include <stdio.h>
// Reverse given number.
void rev(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    rev(a);
    return 0;
}
void rev(int a)
{
    int r = 0, m;
    while (a != 0)
    {
        m = a % 10;
        r = r * 10 + m;
        a /= 10;
    }
    printf("Reversed Number = %d", r);
}