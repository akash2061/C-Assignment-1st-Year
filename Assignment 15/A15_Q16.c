#include<stdio.h>
int p(int m)
{
    for (int a = 2;a*a<=m; a++)
    {
        if (m%a==0){return 0;}
    } return 1;
}
int main()
{
    int i,j,m,a=2;
    printf("Enter a Range between 2 number to print Prime number: \n");
    scanf("%d%d",&i,&j);
    printf("\n");
    for (a=i; a<=j; a++)
    {
        if (p(a)){
            printf("%d\n",a);
        }
    }
    return 0;
}