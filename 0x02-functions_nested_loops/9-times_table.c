#include "main.h"
/**
 * times_table - function prints 9 times table
 *
 *Description: we use loop nested and condition if
 */
void times_table(void)
{
	int x, y, u;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			u = x * y;
			if (u >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar('0' + (u / 10));
				_putchar('0' + (u % 10));
			}
			else
			{
				if ((u < 10) && y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + u);
			}
		}
	_putchar('\n');
	}
}
