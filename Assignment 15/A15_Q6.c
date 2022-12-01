#include<stdio.h>
int fl(int);
int main()
{
    int f,a;
    printf("Enter a number to get it's factorial: ");
    scanf("%d",&f);
    a = fl(f);
    printf("%d",a);
    return 0;
}
int fl(int f)
{
    int n,r=1;
	for(n=1;n<=f;n++)
    {
	   r=r*n;
	}
	return r;
}