#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line,
 * @separator: is the string to be printed between number,
 * @n: the number of integers passed to the function,
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_n;
	unsigned int ij;
	int g;

	va_start(args_n, n);
	for (ij = 0; ij < n; ij++)
	{
		g = va_arg(args_n, int);
		printf("%d", g);
		if (separator != 0 && ij < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args_n);
	printf("\n");
}
