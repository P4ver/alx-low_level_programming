#include "main.h"
/**
 *print_diagonal - funtion 'draws a diagonal,,
 *@n: the number of backslash will be printed,
 *
 *Descriptioon : draw backslash using nested loop
 *	and _putchar,
 */
void print_diagonal(int n)
{
	int y;
	int t;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
		{
			for (t = 0; t < y; t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
