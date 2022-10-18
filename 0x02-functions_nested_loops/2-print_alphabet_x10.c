#include "main.h"

/**
 *print_alphabet_x10 - prints
 *
 */

void print_alphabet_x10(void)
{
int count = 0;
char l;

while (count++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);

_putchar('\n');
}
}
