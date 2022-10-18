#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(string);
string convertToUpper(string);

int main(void)
{

  printf("Lets's play Scrimbble!!\n");

  string word1 = get_string("Player 1: \n");

  string word2 = get_string("Player 2: \n");

  int pointsPlayer1 = compute_score(word1);

  int pointsPlayer2 = compute_score(word2);

  if (pointsPlayer1 > pointsPlayer2)
  {
    printf("Player 1 wins!\n");
  }
  else if (pointsPlayer2 > pointsPlayer1)
  {
    printf("PLayer 2 wins!\n");
  }
  else
  {
    printf("Tie!\n");
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

int compute_score(string word)
{
  string toUpperWord = convertToUpper(word);
  int score = 0;
  for (int i = 0; i < strlen(toUpperWord); i++)
  {
    switch (toUpperWord[i])
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'L':
    case 'N':
    case 'R':
    case 'S':
    case 'T':
      score++;
      break;

    case 'D':
    case 'G':
      score += 2;
      break;

    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      break;

    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      break;

    case 'K':
      score += 5;
      break;

    case 'J':
    case 'X':
      score += 8;
      break;

    case 'Q':
    case 'Z':
      score += 10;
      break;

    default:
      break;
    }
  }
  return score;
}
