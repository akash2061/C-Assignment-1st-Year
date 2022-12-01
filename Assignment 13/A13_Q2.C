#include<stdio.h>
void menu();
int ad(int,int);
int su(int,int);
int mu(int,int);
int di(int,int);

int main()
{
    menu();
    return 0;
}

void menu()
{
  int m,a,b;
  printf("Enter 2 numbers:\n");
  scanf("%d %d",&a,&b);
  printf("Select an option:\n");
  printf("1. Addition.\n");
  printf("2. Subtraction.\n");
  printf("3. Multiplication.\n");
  printf("4. Division.\n");
  printf("5. Exit.\n");
  scanf("%d",&m);
  switch(m)
  {
    case 1: {ad(a,b); break;}
    case 2: {su(a,b); break;}
    case 3: {mu(a,b); break;}
    case 4: {di(a,b); break;}
    case 5: {printf("Exit."); break;}
    default: {printf("Enter a Valid Choice.\n"); menu();}
  }
}

int ad(int a,int b)
{
  int x=a+b;
  printf("Sum = %d",x);
}

int su(int a,int b)
{
  int x=a-b;
  printf("%d",x);
}

int mu(int a,int b)
{
  int x=a*b;
  printf("%d",x);
}

int di(int a,int b)
{
  int x=a/b;
  printf("%d",x);
}
