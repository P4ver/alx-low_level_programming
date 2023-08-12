#include<stdio.h>
/**
 *main - the entry point
 *
 *Description: print number and alphabet
 *
 * Return: 0 to work success
 */
int main(void)
{
	int i;
	char alp_nu[50] = "0123456789abcdef";

	for (i = 0; i <= 15; i++)
		putchar(alp_nu[i]);
	putchar('\n');
	return (0);
}
