#include "main.h"

/**
* _isdigit - 1 to 9
* @c: char
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
