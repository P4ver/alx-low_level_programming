#include "main.h"
/**
 *jack_bauer - function prints every minute of a day,
 *
 *Description: we use nested loop to compute
 */
void jack_bauer(void)
{
	int w;
	int y;

	for (w = 0; w < 24; w++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar('0' + (w / 10));
			_putchar('0' + (w % 10));
			_putchar(':');
			_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
			_putchar('\n');
		}
	}
}
