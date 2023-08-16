#include "main.h"
/**
 * print_sign - function prints the sign of numb
 *
 *@n: the number which we want to know its sign
 *
 *Return: 1 if the numn is positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
