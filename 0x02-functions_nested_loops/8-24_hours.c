#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
