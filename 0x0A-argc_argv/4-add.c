#include <stdio.h>
#include <stdlib.h>
/**
 * ispos_n - function checks if is positive,
 *@ts: string pointer,
 *
 *Return: '1' if not,
 */
int ispos_n(const char *ts)
{
	int q;

	for (q = 0; ts[q] != '\0'; q++)
	{
		if (ts[q] < '0' || ts[q] > '9')
			return (0);
	}
	return (1);
}
/**
 * strng_toint - function converts the string 'arg to 'int,
 *@ts: string pointer,
 *
 *Return: the final result the crrect sign,
 */
int strng_toint(const char *ts)
{
	int res = 0;
	int q;

	for (q = 0; ts[q] != '\0'; q++)
		res = res * 10 + (ts[q] - '0');
	return (res);
}
/**
 * main - the entry point,
 *@argc: nmber of command line 'arg,
 *@argv: nmber of command line 'arg strings,
 *Return: '0' to work successfully,
 */
int main(int argc, char *argv[])
{
	int q;
	int suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (q = 1; q < argc; q++)
	{
		if (!ispos_n(argv[q]))
		{
			printf("Error\n");
			return (1);
		}
		suma += strng_toint(argv[q]);
	}
	printf("%d\n", suma);
	return (0);
}
