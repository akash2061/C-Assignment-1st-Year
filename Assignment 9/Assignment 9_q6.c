#include <stdio.h>
int main()
{
  float a, b, c, p, q, r;
  printf("Enter 1st side of triangle.\n");
  scanf("%f", &a);
  printf("Enter 2nd side of triangle.\n");
  scanf("%f", &b);
  printf("Enter 3rd side of triangle.\n");
  scanf("%f", &c);
  p = a + b;
  q = a + c;
  r = b + c;
  if (a <= r && b <= q && c <= p)
  {
    printf("It's a valid triangle. \n\n");
  }
  else
  {
    printf("It's not a valid triangle. \n\n");
  }
  return 0;
}
