#include "main.h"
/**
 *print_line - function draws straight line,
 *@n: the number of underscore that will be printed
 *
 *Description: draw line using loop print underscores
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int q;

		for (q = 1; q <= n; q++)
			_putchar('_');
		_putchar('\n');
	}
}
