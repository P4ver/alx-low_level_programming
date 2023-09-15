#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything,
 * @format: a list of types of arguments passed to the function,
 */
void print_all(const char * const format, ...)
{
	va_list argm;
	int pr_t = 0, j = 0;

	va_start(argm, format);
	while (format[j])
	{
		if (*format && pr_t == 1)
			printf(", ");
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(argm, int));
				pr_t = 1;
				break;
			case 'i':
				printf("%d", va_arg(argm, int));
				pr_t = 1;
				break;
			case 's':
				printf("%s", va_arg(argm, char *));
				pr_t = 1;
				break;
			case 'f':
				printf("%f", va_arg(argm, double));
				pr_t = 1;
				break;
			default:
				pr_t = 0;
				break;
		}
		j++;
	}
	va_end(argm);
	printf("\n");
}
