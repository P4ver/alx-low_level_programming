#include <stdio.h>
/**
 *main - the entry point
 *
 *Description: pattern pyramid in this exercice
 *	we use loop for and nested
 *
 *Return: 0 always to success
 */
int main(void)
{
	int i;
	int j;
	int c = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			putchar (i + 48);
			putchar (c + j + 48);
			if (i == 8)
				break;
			putchar (44);
			putchar (32);
		}
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
