#include "main.h"
/**
 * _puts -  that prints a string,
 *@str: parameter (string),
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
