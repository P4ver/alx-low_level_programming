#include "main.h"
/**
 * print_last_digit - function that prints last Digit
 *
 *@w: the number which the last digit will be
 *	determined
 *
 *Return: will return the value of last digit
 */
int print_last_digit(int w)
{
	int last_d = w % 10;

	if (w < 0)
		last_d = last_d * (-1);
	_putchar('0' + last_d);
	return (last_d);
}
