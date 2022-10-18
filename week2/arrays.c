#include <stdio.h>

int main(void)
{
  int numbers[3];

  int numbers2[5] =
      {
          3, 4, 5, 6, 7
      };

  numbers[0] = 6;
  numbers[1] = 8;
  numbers[2] = 9;
  printf("Number: %i\n", numbers[2]);

  printf("Numbers2 %i\n", numbers2[4]);
}