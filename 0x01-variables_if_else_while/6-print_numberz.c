#include<stdio.h>
/**
 *main - the entry point
 *
 *Description: print num using putchar
 *Return: 0 to work successfully
 */
int main(void)
{
	int o = 48;

	for (o = 0; o <= 9; o++)
	{
		putchar(o + 48);
	}
	putchar('\n');
	return (0);
}
