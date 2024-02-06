#include <stdio.h>
#include <stdlib.h>

/**
 * main - start
 *
 * Return: 0 on suceess
 */

int main()
{
    char c;
    int i;
    long int l;
    long long int ll;
    float f;

    printf("Size of a char: %i byte(s)\n", sizeof(c));
    printf("Size of a int: %i byte(s)\n", sizeof(i));
    printf("Size of a long int: %i byte(s)\n", sizeof(l));
    printf("Size of a long long int: %i byte(s)\n", sizeof(ll));
    printf("Size of a float: %i byte(s)\n", sizeof(f));
    return 0;
}
