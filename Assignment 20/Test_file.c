#include <stdio.h>
int main()
{ // Structure Array is Collection of Heterogeneous Element.
    struct employee
    { // structure members.
        int id;
        float salary;
        char name[20];
    }; // Declaration can be done here also.
    int i;
    struct employee s1 = {123654, 25000.25, "MorningStar"}; // use these declaration in starting 6 Questions.
    // for (i = 0; i < 3; i++)
    // {
    //     printf("Enter the Id of Employee %d:\n", i + 1);
    //     scanf("%d", &s[i].id);
    //     printf("Enter the salary of Employee %d:\n", i + 1);
    //     scanf("%f", &s[i].salary);
    //     printf("Enter the name of Employee %d:\n", i + 1);
    //     scanf("%s", &s[i].name);
    // }
    printf("\nList of Employee:\n");
    printf("ID\t|");
    printf("  Salary\t|");
    printf("  Name");
    printf("\n");
    printf("----------------------------------------------\n");
    for (i = 0; i <= 1; i++)
    {
        printf("%d\t|", s1.id);
        printf("  %.2f\t|", s1.salary);
        printf("  %s", s1.name);
        printf("\n");
    }
    return 0;
}