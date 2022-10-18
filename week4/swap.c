#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
  int x = 9;
  int y = 3;

  printf("X is: %i\nY is: %i\n", x, y);

  swap(&x, &y);

  printf("X is: %i\nY is: %i\n", x, y);
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
