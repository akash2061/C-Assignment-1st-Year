#include <stdio.h>
void month();
void feb();
int main()
{
  month();
  return 0;
}
void month()
{
    int m;
    printf("Enter the month number between 1 - 12: ");
    scanf ("%d", &m);
    switch (m)
    {
      case 1: {printf("31 days."); break;}
      case 2: { feb(); break;}
      case 3: {printf("31 days."); break;}
      case 4: {printf("30 days."); break;}
      case 5: {printf("31 days."); break;}
      case 6: {printf("30 days."); break;}
      case 7: {printf("31 days."); break;}
      case 8: {printf("31 days."); break;}
      case 9: {printf("30 days."); break;}
      case 10: {printf("31 days."); break;}
      case 11: {printf("30 days."); break;}
      case 12: {printf("31 days."); break;}
      default:{
        printf("Enter a Valid month.\n");
        month();
      }
    }
}
void feb()
{
    int y;
    printf("You Entered 2nd month.\nNow Enter the year: ");
    scanf("%d",&y);
    if((y%4==0) && ((y%400==0) || (y%100!=0)))
    {
      printf("29 Days.");
    }else{
      printf("28");
    }
}
