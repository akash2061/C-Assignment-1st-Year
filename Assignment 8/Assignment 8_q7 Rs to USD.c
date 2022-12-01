#include <stdio.h>
int main()
{
  float r, u, c;
  printf("Enter the amount in Rupees: \n");
  scanf("%f", &r);
  u = r / 82.83;
  printf("$ %.2f", u);
  return 0;
}
