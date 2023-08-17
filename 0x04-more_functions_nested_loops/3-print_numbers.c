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

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
