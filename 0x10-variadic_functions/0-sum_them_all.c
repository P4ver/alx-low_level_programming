#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters,
 * @n: integer is the number of args,
 * Return: return suma,
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_n;
	unsigned int in;
	int suma = 0;
	int gh;

	if (n == 0)
		return (0);

	va_start(args_n, n);

	for (in = 0; in < n; in++)
	{
		gh = va_arg(args_n, int);
		suma = suma + gh;
	}
	va_end(args_n);
	return (suma);
}
