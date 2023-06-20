#include "main.h"

int _putchar(char c); // Declaration of the _putchar function

/*
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
  char c;
  for (c = 'a'; c <= 'z'; c++)
  {
    _putchar(c);
  }
  _putchar('\n');
}

int main(void)
{
  print_alphabet();
  return 0;
}
