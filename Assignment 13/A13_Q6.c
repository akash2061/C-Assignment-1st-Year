#include<stdio.h>
int main()
{
    int v;
    printf("Enter a variable: ");
    scanf("%d",&v);

    switch (v)
    {
      case 1: {printf("GOOD."); break;}
      case 2: {printf("BETTER."); break;}
      case 3: {printf("BEST"); break;}
      default:{printf("INVALID.");}
    }
    return 0;
}