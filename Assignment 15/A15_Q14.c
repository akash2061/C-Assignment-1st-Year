#include<stdio.h>
int main()
{
    int i,n,n2,f,j;
    printf("Enter a starting Number: ");
    scanf("%d",&n);
    printf("Enter the ending Number: ");
    scanf("%d",&n2);
    printf("Prime Number in between %d and %d is:\n",n,n2);
    for(i=n+1;i<=n2;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }else if(f==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}