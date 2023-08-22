#include "main.h"
/**
 *puts2 - function that prints every other character of a string,
 *	starting with the first character;
 *@str: string input;
 */
void puts2(char *str)
{
	int e;

	for (e = 0; str[q] != '\0'; ++e)
	{
		if (e % 2 == 0)
			_putchar(str[e]);
	}
	_putchar('\n');
}
