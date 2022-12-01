#include<stdio.h>
void menu();
void B(int);
void F(int);
void P(int);
void S(int);

int main()
{
  menu();
  return 0;
}

void menu()
{
  int c,q,y;
  printf("Menu.\n");
  printf("1. Burger.\t = Rs. 200\n");
  printf("2. French Fries. = Rs. 50\n");
  printf("3. Pizza.\t = Rs. 500\n");
  printf("4. Sandwich.\t = Rs. 150\n");
  printf("Enter your choice:\t");
  scanf("%d",&c);
  printf("Enter the quantity:\t");
  scanf("%d",&q);
  printf("\n");

  switch (c)
  {
  case 1:{ B(q);  break;}
  case 2:{ F(q);  break;}
  case 3:{ P(q);  break;}
  case 4:{ S(q);  break;}

  default:{printf("Enter a valid choice. \n"); menu();}
  }
}

void B(int q)
{
  int n=q*200;
  printf("Total charge = Rs. %d\n",n);
  printf("Thank You, Visit Again   ^_^");
}

void F(int q)
{
  int n=q*50;
  printf("Total charge = Rs. %d\n",n);
  printf("Thank You, Visit Again   ^_^");
}

void P(int q)
{
  int n=q*500;
  printf("Total charge = Rs. %d\n",n);
  printf("Thank You, Visit Again   ^_^");
}

void S(int q)
{
  int n=q*150;
  printf("Total charge = Rs. %d\n",n);
  printf("Thank You, Visit Again   ^_^");
}