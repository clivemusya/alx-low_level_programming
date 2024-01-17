#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, multi;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	multi = x * y;
	printf("%d\n", multi);

	return (0);
}
