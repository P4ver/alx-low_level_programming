#include "main.h"
/**
 *print_numbers - print num form 0 to 9,
 *
 *Description: print numbers using _putchar
 *	and for loop,
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
