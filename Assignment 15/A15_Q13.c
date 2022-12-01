#include <stdio.h>

// PRIME * PRIME = PRIME {WHICH IS AN ERROR}

int main()
{
    int a, b, c;
    printf("Enter a number to check wether it's prime or NOT: ");
    scanf("%d", &a);
    for (b = 2; b < a; b++)
    {
        if (a % b != 0 && a % 3 != 0 && a % 7 != 0 && a % 5 != 0)
        {
            printf("It's a prime no.");
            break;
        }
        else
        {
            printf("It's not a prime no.");
            break;
        }
    }
    return 0;
}