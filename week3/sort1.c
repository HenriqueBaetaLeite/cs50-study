#include <stdio.h>

int findMin(int[]);
int findPositionOfMin(int[]);
void testing(int array[]);

int size = 6;

int main(void)
{

  int numbers[6] = {7, 2, -8, 5, 4, 3};

  // int little = findMin(numbers);

  // int pos = findPositionOfMin(numbers);

  // printf("O menor numero do array é: %i\n", little);

  // printf("Pos: %i\n", pos);

  testing(numbers);
}

int findMin(int numbers[])
{
  int min = numbers[0];
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] < min)
    {
      min = numbers[i];
    }
  }
  return min;
}

int findPositionOfMin(int numbers[])
{
  int min = findMin(numbers);

  int newArray[6];

  int pos = 0;
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == min)
    {
      pos = i;
    }
    if (numbers[i] > min)
    {
      int temp = numbers[i];
      numbers[i] = min;
      min = numbers[pos];
      newArray[i] = min;
      newArray[pos] = numbers[pos];
    }
  }
  for (int k = 0; k < size; k++)
  {
    printf("%i ", newArray[k]);
  }
  printf("\n");
  return pos;
}

void testing(int array[])
{
  for (int index = 0; index < size; index++)
  {
    printf("POS index: %i\n", array[index]);
    printf("POS index + 1: %i\n", array[index + 1]);
    if (array[index] > array[index + 1])
    {
      int temp = array[index];
      array[index] = array[index + 1];
      array[index + 1] = temp;
    }
    printf("%i", array[index]);
  }
  printf("\n");
  // printf("\n");
}
