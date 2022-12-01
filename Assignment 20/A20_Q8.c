#include <stdio.h>
int main()
{
    struct students
    {
        int sId;
        int roll;
        double mob;
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
        printf("Enter the Mobile no. of Students %d:\n", i + 1);
        scanf("%lf", &s[i].mob);
        printf("Enter the name of Students %d:\n", i + 1);
        scanf("%s", &s[i].name);
    }
    printf("\nList of Students:\n");
    printf("ID\t|");
    printf("  Roll no.\t|");
    printf("  Mobile no.\t|");
    printf("  Name");
    printf("\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t|", s[i].sId);
        printf("  %d\t|", s[i].roll);
        printf("  %.0f\t|", s[i].mob);
        printf("  %s", s[i].name);
        printf("\n");
    }
    return 0;
}