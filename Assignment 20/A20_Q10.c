#include <stdio.h>
int main()
{
    struct students
    {
        int sId;
        int roll;
        int marks;
        int pm;
        int cm;
        int mm;
        char name[10];
    };
    int i;
    struct students s[20];
    printf("Enter the Info. of 20 Students:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Enter the Id of Students %d:\n", i + 1);
        scanf("%d", &s[i].sId);
        printf("Enter the roll no. of Students %d:\n", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the total marks of Students %d:\n", i + 1);
        scanf("%d", &s[i].marks);
        printf("Enter the Physics marks of Students %d:\n", i + 1);
        scanf("%d", &s[i].pm);
        printf("Enter the Chemistry marks of Students %d:\n", i + 1);
        scanf("%d", &s[i].cm);
        printf("Enter the Mathematics marks of Students %d:\n", i + 1);
        scanf("%d", &s[i].mm);
        printf("Enter the name of Students %d:\n", i + 1);
        scanf("%s", &s[i].name);
    }
    printf("\nList of Students:\n");
    printf("ID\t|");
    printf("  Roll no.\t|");
    printf("  Phys. Marks\t|");
    printf("  Chem. Marks\t|");
    printf("  Math. Marks\t|");
    printf("  Total Marks\t|");
    printf("  Name");
    printf("\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t|", s[i].sId);
        printf("  %d\t|", s[i].roll);
        printf("  %d\t|", s[i].pm);
        printf("  %d\t|", s[i].cm);
        printf("  %d\t|", s[i].mm);
        printf("  %d\t|", s[i].marks);
        printf("  %s", s[i].name);
        printf("\n");
    }
    return 0;
}