#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  a function that prints strings, followed by a new line,
 * @separator: the string to be printed between the strings,
 * @n: the number of strings passed to the function,
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_n;
	unsigned int in;
	char *g;

	va_start(args_n, n);

	for (in = 0; in < n; in++)
	{
		g = va_arg(args_n, char*);
		if (g == 0)
			printf("(nil)");
		else
			printf("%s", g);
		if (separator != 0 && in < n - 1)
			printf("%s", separator);
	}
	va_end(args_n);
	printf("\n");
}
