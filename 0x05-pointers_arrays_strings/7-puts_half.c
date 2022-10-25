#include "main.h"

/**
 *puts_half - prints
 *@str: var
 *Return: 0
 */

void puts_half(char *str)
{
int temp = 0, a;
while (str[temp] != '\0')
temp++;
if (temp + 1 % 2 != '0')
a = (temp - 1) / 2;
else
a = (temp / 2);
a++;
for (temp = a; str[temp] != '\0'; temp++)
_putchar(str[temp]);
_putchar('\n');
}
