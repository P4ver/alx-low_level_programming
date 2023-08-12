#include<stdio.h>
/**
 *main - the entry point
 *
 *Description: print num using putchar
 *Return: 0 to work successfully
 */
int main(void)
{
	int i;
	char nu[20] = "0123456789";

	for (i = 0; i <= 9; i++)
		putchar(nu[i]);
	putchar('\n');
	return (0);
}
