#include "main.h"
/**
 * print_alphabet_x10 - print alphabet '10 times
 *	nested loop,
 *
 *Return: always 0 success,
 */
void print_alphabet_x10(void)
{
	int i;
	int u;

	for (i = 0; i < 10; i++)
	{
		for (u = 'a'; u < 'z'; u++)
		{
			_putchar(u);
		}
		putchar('\n');
	}
}
