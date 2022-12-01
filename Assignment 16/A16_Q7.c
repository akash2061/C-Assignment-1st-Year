#include <stdio.h>
// Count digit in a given number.
int main()
{
    int n, c = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    do
    {
        n /= 10;
        ++c;
    } while (n != 0);
    printf("%d", c);
    return 0;
}