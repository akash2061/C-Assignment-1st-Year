#include<stdio.h>
void menu();
void I(int,int,int);
void A(int,int,int);
void E(int,int,int);

int main()
{
    menu();
    return 0;
}

void menu()
{
    int c,x,y,z;
    printf("Enter the 3 Quantity (for Triangle): \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Choose a following option: \n");
    printf("1. Check wether given quantity is for Isosceles Triangle or not.\n");
    printf("2. Check wether given quantity is for Right Angle Triangle or not.\n");
    printf("3. Check wether given quantity is for Equilateral Triangle or not.\n");
    scanf("%d",&c);

    switch (c)
    {
       case 1:{ I(x,y,z); break;}
       case 2:{ A(x,y,z); break;}
       case 3:{ E(x,y,z); break;}
       default:{printf("Enter a valid choice."); menu();}
    }
}

void I(int x,int y, int z)
{
    if ((x==y || x==z || y==z) && (z<(x+y) && y<(x+z) && x<(y+z)))
    {
        printf("It's an Isosceles Triangle.");
    }else
    {
        printf("It's not an Isosceles Triangle.");
    }
}

void A(int x,int y,int z)
{
    if((x*x)==((y*y)+(z*z)) || (y*y)==((x*x)+(z*z)) || (z*z)==((y*y)+(x*x)))
    {
        printf("It's a Right Angle Triangle.");
    }else
    {
        printf("It's not a Right Angle Triangle.");
    }
}

void E(int x,int y,int z)
{
    if(x==y==z)
    {
        printf("It's an Equilateral Triangle");
    }else
    {
        printf("It's not an Equilateral Triangle");
    }
}