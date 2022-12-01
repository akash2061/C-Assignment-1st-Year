#include <stdio.h>
int main()
{
    struct bday
    {
        int D;
        int M;
        int Y;
    };
    int i;
    struct bday s[5];
    printf("Enter 5 Birth Date:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Date %d:\n", i + 1);
        scanf("%d", &s[i].D);
        printf("Enter the Month %d:\n", i + 1);
        scanf("%d", &s[i].M);
        printf("Enter the Year %d:\n", i + 1);
        scanf("%d", &s[i].Y);
    }
    printf("\nList of Birth Dates are:\n");
    printf("Day\t|\t", s[i].D);
    printf("Month\t|\t", s[i].M);
    printf("Year\n", s[i].Y);
    printf("----------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t-\t", s[i].D);
        printf("%d\t-\t", s[i].M);
        printf("%d", s[i].Y);
        printf("\n");
    }
    return 0;
}