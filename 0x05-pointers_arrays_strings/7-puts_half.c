#include "main.h"
/**
 * puts_half - function that prints half of a string;
 * @str: string input;
 */
void puts_half(char *str)
{
	int lenght = 0;

	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	str -= (lenght / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
