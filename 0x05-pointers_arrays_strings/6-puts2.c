#include "main.h"

/**
 *puts2 - prints
 *@str: var
 *Return: 0
 */

void puts2(char *str)
{
int temp;
for (temp = 0; str[temp] != '\0'; temp++)
if (temp % 2 == 0)
_putchar(str[temp]);
_putchar('\n');
}
