#include<stdio.h>
int main()
{
	int i,a,n;
	printf("Enter a number:\n");
	scanf("%d",&i);
	for(a=1;a<=i;a++){
		n=a%2;
		if(n==0){
		printf("%d\n",a);
	}
	}
	return 0;
}
