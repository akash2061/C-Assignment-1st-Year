#include <stdio.h>
int main(void)
{
  int N1, N2;
  // Python is more easy then C/C++ &#9786(??).
  printf("Write 1st number: \n");
  scanf("%d", &N1);
  printf("Write 2nd number: \n");
  scanf("%d", &N2);
  printf("Sum of %d and %d is %d.\n", N1, N2, N1 + N2);
  printf("Subtraction of %d and %d is %d.\n", N1, N2, N1 - N2);
  printf("Product of %d and %d is %d.\n", N1, N2, N1 * N2);
  printf("Division of %d and %d is %d.\n", N1, N2, N1 / N2);
  printf("Remainder of %d and %d is %d.\n", N1, N2, N1 % N2);
  return 0;
}
