#include "3-calc.h"

/**
  * op_add - adds two integers
  * @a: int1
  * @b: int2
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two integers
  * @a: int1
  * @b: int2
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: int1
  * @b: int2
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: int1
  * @b: int2
  *
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
  * op_mod - finds the modulus
  * @a: int1
  * @b: int2
  *
  * Return: the mode
  */
int op_mod(int a, int b)
{
	if (b != 0
		return (a % b);
	else
		printf("Error\n");
		exit(100)
}
