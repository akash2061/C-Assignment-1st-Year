#include <stdio.h>
void ar(int);
int main()
{
    int r;
    printf("Enter a limit to write natural number: ");
    scanf("%d", &r);
    ar(r);
    return 0;
}
void ar(int r)
{
    for (int a = 1; a <= r; a++)
    {
        printf("%d\n", a);
    }
}