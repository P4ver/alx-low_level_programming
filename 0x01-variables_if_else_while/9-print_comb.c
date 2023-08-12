#include <stdio.h>
/**
 *main - the entry point
 *
 *Discription: making combination for success
 *
 *Return: 0 to work success
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
		putchar(i + 48);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
