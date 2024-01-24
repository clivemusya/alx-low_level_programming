#include "function_pointers.h"

/**
 * main -  prints the opcodes of its own main function.
 *
 * @argc: number of args
 * @argv: arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (j = 0; j < i; j++)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", a[j]);
			break;
		}
		printf("%02hhx ", a[j]);
	}

	return (0);
}
