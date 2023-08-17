#include "main.h"
/**
 * print_times_table - function prints 'n'times table,
 *@n: the variables integer which defines how many
 *	times table,
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int m, k, p;

		for (m = 0; m <= n; m++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');
				p = m * k;
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p > 9 && p <= 99)
				{
					_putchar('0' + (p / 10));
				}
				else if (p > 99)
				{
					_putchar('0' + (p / 100));
					_putchar('0' + (p / 10) % 10);
				}
				_putchar('0' + (p % 10));
			}
		_putchar('\n');
		}

	}
}
