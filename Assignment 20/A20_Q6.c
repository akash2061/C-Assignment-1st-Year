#include <stdio.h>
int main()
{
    struct students
    {
        int sId;
        int roll;
        float total;
        float per;
        float pm;
        float cm;
        float mm;
        char name[10];
    };
    int i;
    struct students s[5];
    printf("Enter the Info. of 5 Students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Id of Students %d:\n", i + 1);
        scanf("%d", &s[i].sId);
        printf("Enter the roll no. of Students %d:\n", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the Physics marks of Students %d:\n", i + 1);
        scanf("%f", &s[i].pm);
        printf("Enter the Chemistry marks of Students %d:\n", i + 1);
        scanf("%f", &s[i].cm);
        printf("Enter the Mathematics marks of Students %d:\n", i + 1);
        scanf("%f", &s[i].mm);
        printf("Enter the name of Students %d:\n", i + 1);
        scanf("%s", &s[i].name);
    }
    for (i = 0; i < 5; i++)
    {
        s[i].total = s[i].pm + s[i].cm + s[i].mm;
        s[i].per = (s[i].total * 100) / 300;
    }
    printf("\nList of Students:\n");
    printf("ID\t|");
    printf("  R no. |");
    printf("  Phys.M |");
    printf("  Chem.M |");
    printf("  Math.M |");
    printf("  Total M |");
    printf("  Percentage\t|");
    printf("  Name");
    printf("\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t|", s[i].sId);
        printf("   %d   \t|", s[i].roll);
        printf("  %.2f  |", s[i].pm);
        printf("  %.2f  |", s[i].cm);
        printf("  %.2f  |", s[i].mm);
        printf("  %.2f  |", s[i].total);
        printf("  %.2f %%\t|", s[i].per);
        printf(" %s", s[i].name);
        printf("\n");
    }
    return 0;
}