#include <stdio.h>
int main()
{
    struct employee
    {
        int id;
        float salary;
        char name[10];
    };
    int i, n;
    printf("Enter the number of employee info you want to write:\n");
    scanf("%d", &n);
    struct employee s[n];
    printf("Enter the Info. of employee:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Id of Employee %d:\n", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter the salary of Employee %d:\n", i + 1);
        scanf("%f", &s[i].salary);
        printf("Enter the name of Employee %d:\n", i + 1);
        scanf("%s", &s[i].name);
    }
    printf("\nList of Employee:\n");
    printf("ID\t|");
    printf("  Salary\t|");
    printf("  Name");
    printf("\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t|", s[i].id);
        printf("  %.2f\t|", s[i].salary);
        printf("  %s", s[i].name);
        printf("\n");
    }
    return 0;
}