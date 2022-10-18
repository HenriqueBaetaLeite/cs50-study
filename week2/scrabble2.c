#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(string word);
string convertToUpper(string wordT);

const int SIZE = 26;

int points[SIZE] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

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
    wordT[i] = toupper(wordT[i]);
  }
  return wordT;
}

int compute_score(string word)
{
  string toUpperWord = convertToUpper(word);
  int score = 0;

  int len = strlen(toUpperWord);

  for (int index = 0; index < len; index++)
  {
    score += points[word[index] - 'A'];
  }
  return score;
}
