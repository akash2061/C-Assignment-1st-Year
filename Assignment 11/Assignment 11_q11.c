#include <stdio.h>
int main()
{
  int i, a;
  printf("Enter No. to print odd natural no. in reverse order.:\n");
  scanf("%d", &i);
  while (i > 0, i--)
  {
    a = i % 2;
    if (a != 0)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}
