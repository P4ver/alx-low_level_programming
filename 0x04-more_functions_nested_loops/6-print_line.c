#include "main.h"
/**
 *print_line - function draws straight line,
 *@n: the number of underscore that will be printed
 *
 *Description: draw line using loop print underscores
 */
void print_line(int n)
{
	int q;

	for (q = 0; q <= n; q++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
