#include <stdio.h>
/**
 * main - the entry point of the program,
 *@argc: Number of command-line 'arg,
 *@argv: Arr of command-line 'arg strings,
 *Return: 0 to success,
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
