#include <stdio.h>
/**
 *main - the entry point
 *
 *alphabet without q and e
 *
 *Return: 0 to work successfully
 */
int main(void)
{
	int i;
	char alph_l[30] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 25; i++)
	{
		if (i == 4 || i == 16)
			continue;
		putchar(alph_l[i]);
	}
	putchar('\n');
	return (0);
}
