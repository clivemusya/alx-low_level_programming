#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: var
 *Return: temp
 */

int _strlen(char *s)
{
int temp = 0;
for (; *s++;)
temp++;
return (temp);
}
