#include <stdio.h>
int main()
{
	int i, a;
	printf("Enter a number:\n");
	scanf("%d", &i);
	for (a = 1; a <= i; a = a + 1)
	{
		printf("%d\n", a);
	}
	return 0;
}
