#include<stdio.h>
int main()
{
	//factorial.
	int i;
	printf("Enter the number to get its Factorial:");
	scanf("%d",&i);
	int n,f=1;
	for(n=1;n<=i;n++){
		f=f*n;
		}
		printf("%d",f);
	return 0;
}
