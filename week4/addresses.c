#include <stdio.h>
#include <cs50.h>

// I can create an alias for the type int with the name I want.
typedef int xablau;

int main(void) {
  xablau n = 50;

  char *s = "Hi!";

  xablau *pointer = &n;

  printf("O endereço da variável N é: %p\n", &n);

  printf("Go to the reference pointer, the value is: %i\n", *pointer);

  // Strings here
  // string s = "hi!";
}