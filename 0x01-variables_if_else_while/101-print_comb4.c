#include <stdio.h>
/**
 *main - the entry point
 *
 *Description: we use int c to increment every row
 *	inside three nested loops
 *
 *Return: always 0 to success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int c = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			for (k = 0; k < 9 - j; k++)
			{
				if (j + c == k + j + c)
					continue;
				if (k + j + c > 9)
					break;
				putchar (i + 48);
				putchar (j + c + 48);
				putchar (k + j + c + 48);
				if (i == 7)
					break;
				putchar (44);
				putchar (32);
			}
		}
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
