/*FACTORIAL CALCULATION USING FUNCTION*/

#include <stdio.h>

int factorial(int);
int factorial(int a)
{
  int factorial = 1;
  for (int i = 1; i <= a; i++)
  {
    factorial = factorial * i;
  }
return factorial;
}
int main()
{
  int n;
  printf("enter anumber:");
  scanf("%d",&n);
  printf("factorial of %d is %d", n, factorial(n));
  return 0;
}