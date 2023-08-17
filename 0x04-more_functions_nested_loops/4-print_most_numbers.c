#include "main.h"
/**
 *print_most_numbers - function count to 9 exept 2 and 4,
 *
 *Description: we use for loop and if to ignore 2 and 4,
 */
void print_most_numbers(void)
{
	int q;

	for (q = 0; q <= 9; q++)
	{
		if (q == 2 || q == 4)
			continue;
		_putchar('0' + q);
	}
	_putchar('\n');
}
