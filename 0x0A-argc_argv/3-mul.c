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
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = strng_toint(argv[1]);
	n2 = strng_toint(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);
	return (0);
}
