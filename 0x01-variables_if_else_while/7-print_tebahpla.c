#include<stdio.h>
/**
 *main - the entry point
 *
 *Descriptio: inverse
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	char alp[30]= "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i <= 25; i++)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}
