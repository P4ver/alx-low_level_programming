#include <stdio.h>
/**
 *main - the entry point
 *
 *Description we have to call alphabet
 *Return: 0 to work successflly
 */
int main(void)
{
	int i;
	char alphbt[40] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 25; i++)
	{
		putchar(alphbt[i]);
	}
	putchar('\n');
	return (0);
}
