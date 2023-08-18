#include "main.h"
/**
 *more_numbers - function prints 10 times frm 0 to 14
 *
 *Dicription: we use nested loop to print 10 times
 *	from 0 to 14
 */
void more_numbers(void)
{
	int h;
	int q;

	for (h = 0; h <= 9; h++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q > 9)
				_putchar('0' + (q / 10));
			_putchar('0' + (q % 10));
		}
		_putchar('\n');
	}
}
