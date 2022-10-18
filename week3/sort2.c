#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Bubble sort

void swap(int array[], int number1, int number2);

int main(void)
{
  int size = 6;
  int numbers[6] = {7, 2, 8, 5, 4, 3};

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      printf("aqui o I e o J: %i %i %i %i\n", i, numbers[i], j, numbers[j]);
      if (numbers[i] < numbers[j])
      {
        swap(numbers, i, j);
      }
    }
  }

  // Printing all the elements of array after they are sorted
  printf("array ordenado: ");
  for (int z = 0; z < 6; z++)
  {
    printf("%i", numbers[z]);
  }
  printf("\n");
}

void swap(int numbers[], int i, int j)
{
  printf("aqui vou printar o array antes de trocar de posição: \n");

  for (int index = 0; index < 6; index++)
  {
    printf("%i", numbers[index]);
  }
  printf("\n");

  int temp = numbers[i];
  numbers[i] = numbers[j];
  numbers[j] = temp;

  printf("aqui vou printar o array despois de trocar de posição: \n");
  for (int index = 0; index < 6; index++)
  {
    printf("%i", numbers[index]);
  }
  printf("\n");
}
