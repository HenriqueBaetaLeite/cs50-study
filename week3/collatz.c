#include <cs50.h>
#include <stdio.h>
#include <string.h>

int collatz(int n);

int main(void)
{
  int steps = get_int("Type n for collatz: \n");

  int numberSteps = collatz(steps);

  printf("%i Steps\n", numberSteps);
}

int collatz(int n)
{
  if (n == 1)
  {
    return 0;
  }
  else if (n % 2 == 0)
  {
    return 1 + collatz(n / 2);
  }
  else
  {
    return 1 + collatz(3 * n + 1);
  }
}
