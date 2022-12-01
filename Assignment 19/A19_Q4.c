#include <stdio.h>
int main()
{
    // Adjacent duplicate {2,2 = 2 || 2,3,2 = No output}
    int a, b = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &a);
    int ar[a];
    printf("Enter the number in array:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Duplicate = ");
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (ar[i] == ar[j] && ar[j] != ar[j + 1])
            {
                printf("%d\n", ar[i]);
            }
            else
            {
                break;
                break;
            }
        }
    }
    return 0;
}