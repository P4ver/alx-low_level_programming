#include "main.h"
/**
 * puts_half - function that prints half of a string;
 * @str: string input;
 */
void puts_half(char *str)
{
	int d;
	int g;
	int lenght;

	for (d = 0; str[d] != '0'; d++)
	{
		lenght++;
	}
	g = (lenght / 2);
	if ((lenght % 2) == 1)
	{
		g = ((lenght + 1) / 2);
	}
	for (d = g; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
