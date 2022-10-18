#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string strings[] = {
      "boot",
      "cannon",
      "battleship",
      "iron",
      "top hat",
  };
  string s = get_string("String: \n");
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}