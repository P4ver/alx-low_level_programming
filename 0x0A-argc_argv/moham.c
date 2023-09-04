#include <stdio.h>
#include <stdlib.h>
/**
 * strng_toint - function converts the string 'arg to 'int,
 *@ts: string pointer,
 *
 *Return: the final result the crrect sign,
 */
int strng_toint(char *ts)
{
	int res = 0;
	int s = 1;
	int q = 0;

	if (ts[0] == '-')
	{
		s = -1;
		q = 1;
	}
	while (ts[q] != '\0')
	{
		if (ts[q] >= '0' && ts[q] <= '9')
		{
			res = res * 10 + (ts[q] - '0');
		}
		else
		{
			exit(1);
		}
		q++;
	}
	return (res * s);
}
/**
 * main - the entry point,
 *@argc: nmber of command line 'arg,
 *@argv: nmber of command line 'arg strings,
 *Return: '0' to work successfully,
 */
int main(int argc, char *argv[])
{
	int n_1;
	int n_2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n_1 = strng_toint(argv[1]);
	n_2 = strng_toint(argv[2]);
	res = n_1 * n_2;

	printf("%d\n", res);
	return (0);
}
