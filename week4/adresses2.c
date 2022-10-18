#include <stdio.h>
#include <cs50.h>

int main(void) {
  string s = get_string("S: ");
  string t = get_string("T: ");

  printf("%s\n", s);
  printf("%s\n", t);

  printf("%p\n", t);
}