#include <stdio.h>
/**
 * main - the entry point,
 *@argc: nùber of command line 'arg,
 *@argv: nuber of command line 'arg strings,
 *
 *Return: '0' to work successfully,
 */
int main(int argc, char *argv[])
{
	int qg;

	for (qg = 0; qg < argc; qg++)
		printf("%s\n", argv[qg]);
	return (0);
}
