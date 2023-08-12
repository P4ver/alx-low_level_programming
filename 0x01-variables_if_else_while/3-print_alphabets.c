#include <stdio.h>
/**
 *main - the entry point
 *
 * alphabet upper and lowercase
 *
 * Return: 0 to work successfully
 */
int main(void)
{
	int i;
	char a_u_l[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i <= 51; i++)
	{
		putchar(a_u_l[i]);
	}
	putchar('\n');
	return (0);
}
