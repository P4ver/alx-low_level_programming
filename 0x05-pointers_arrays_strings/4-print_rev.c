#include "main.h"
/**
 * print_rev - print a tring in reverse,
 * @s :parameter (variable tye character),
 */
void print_rev(char *s)
{
	int ln = 0;

	for (ln = 0; *s != '\0'; ln++)
	{
		s++;
	}
	s--;
	while (ln--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
