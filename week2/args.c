#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string convertToUpper(string);

int main(int argc, string argv[])
{
  printf("That was args: %i\n", argc);

  int sizeArgv = strlen(argv[1]);

  for (int i = 0; i < sizeArgv; i++)
  {
    printf("%c\n", argv[1][i]);
  }
}

string convertToUpper(string wordT)
{
  for (int i = 0; i < strlen(wordT); i++)
  {
    // if (islower(wordT[i]))
    // if (wordT[i] >= 'a' && wordT[i] <= 'z')
    // {
    // wordT[i] = toupper(wordT[i]);
    // wordT[i] = wordT[i] - 32;
    // }
    wordT[i] = toupper(wordT[i]);
  }
  return wordT;
}
