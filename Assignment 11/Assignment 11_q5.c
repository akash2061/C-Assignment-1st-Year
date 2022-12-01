#include<stdio.h>
int main()
{
	int i,n;
	float r,a,b;
	printf("Enter no. of times you want to add 2 numbers:");
	scanf("%d",&i);
	printf("\n");
	for(n=1;n<=i;n++){
		printf("Enter 1st number:");
		scanf("%f",&a);
		printf("Enter 2nd number:");
		scanf("%f",&b);
		r=a+b;
		printf("Sum = %.2f\n\n",r);
	}
	return 0;
}
