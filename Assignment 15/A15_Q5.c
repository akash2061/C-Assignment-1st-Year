#include<stdio.h>
void odd(int);
int main()
{
    int o;
    printf("Enter a limit to print odd numbers: ");
    scanf("%d",&o);
    odd(o);
    return 0;
}
void odd(int o)
{
    int a,r;
    for(a=1;a<=o;a++)
    {
        r=a%2;
        if (r!=0)
        {
            printf("%d\n",a);
        }
    }
}