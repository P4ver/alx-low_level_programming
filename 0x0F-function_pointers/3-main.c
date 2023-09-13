#include "3-calc.h"
/**
 * main - the entry point,
 * @argc: integer,
 * @argv: pointer (char)
 * Return: '0' to work success,
 */
int main(int argc, char *argv[])
{
	int nj1, nj2, re;
	int (*ope)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	nj1 = atoi(argv[1]);
	nj2 = atoi(argv[3]);
	ope = get_op_func(argv[2]);
	if (ope == 0)
	{
		printf("Error\n");
		return (99);
	}
	re = ope(nj1, nj2);
	printf("%d\n", re);
	return (0);
}
