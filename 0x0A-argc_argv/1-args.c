#include <stdio.h>
/**
 * main - the entry point,
 *@argc: nùber of command line 'arg,
 *@argv: nuber of command line 'arg strings,
 *Return: '0' to work successfully
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
