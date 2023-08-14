#include <stdio.h>
/**
 *main - the entry point
 *
 *Description: i used  printf("%2d %2d",i,j+c) and
 *	i convert it to putchar as you can see
 *
 *Return: 0 to work successfully
 */
int main(void)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 99 - i; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(32);
			putchar('0' + ((j + c) / 10));
			putchar('0' + ((j + c) % 10));
			if (i == 98)
				break;
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
