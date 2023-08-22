#include "main.h"
/**
 * puts_half - function that prints half of a string;
 * @str: string input;
 */
void puts_half(char *str)
{
	int d;
	int n;
	int lenght;
	lenght = 0;

	for (d = 0; str[d] != '0'; d++)
	{
		lenght++;
	}
	n = (lenght / 2);
	if ((lenght % 2) == 1)
	{
		n = ((lenght - 1) / 2);
	}
	for (d = n; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
