#include "main.h"
#include <stdio.h>

/**
 *print_array - prints
 *@a: var
 *@n: var
 *Return: 0
 */

void print_array(int *a, int n)
{
int temp;
for (temp = 0; temp < n; temp++)
if (temp != n - 1)
printf("%d, ", a[temp]);
else
printf("%d", a[temp]);
printf("\n");
}
