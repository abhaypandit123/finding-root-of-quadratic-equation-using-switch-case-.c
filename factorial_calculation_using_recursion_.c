/*FACTORIAL OF NUMBER CALCULATION USING FUNCTION AND RECURSION*/

#include <stdio.h>

/*USING RECURSION FACTORIAL CALCULATION*/

int factorial(int);
int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }

  return factorial(n - 1) * n;
}
  
int main()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  printf("factorial of %d=%d", n, factorial(n));
  return 0;
}