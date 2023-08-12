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
	char a_u_l[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i <= 51; i++)
	{
		putchar(a_u_l[i]);
	}
	return (0);
}
