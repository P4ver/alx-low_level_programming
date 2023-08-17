#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int m, k, p;

		for (m = 0; m <= n; m++)
		{
			for (k = 0; k <= n; k++)
			{
				p = m * k;
				if (p > 9 && p <= 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar('0' + (p / 10));
					_putchar('0' + (p % 10));
				}
				else if (p > 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar('0' + (p / 100));
					_putchar('0' + (p % 100) % 10);
					_putchar('0' + (p % 10));
				}
				else
				{
					if (j != 0 && p < 99)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar('0' + p);
				}
			}
		_putchar('\n');
		}

	}
}
