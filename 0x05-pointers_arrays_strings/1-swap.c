#include "main.h"

/**
 *swap_int - changes
 *@a: var1
 *@b: var2
 *Return: 0
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
