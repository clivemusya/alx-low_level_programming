#include "main.h"

/**
 *print_rev - prints
 *@s: var
 */

void print_rev(char *s)
{
int i, a;
a = 0;
while (s[a] != '\0')
a++;
for (i = a - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
