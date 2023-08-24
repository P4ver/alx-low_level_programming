#include "main.h"
/**
 * string_toupper -  a function that changes all lowercase letters of
 *	a string to uppercase.
 *@k: pointer,
 *
 *Return: return k,
 */
char *string_toupper(char *k)
{
	int cnt = 0;

	while (k[cnt] != '\0')
	{
		if (k[cnt] >= 'a' && k[cnt] <= 'z')
			k[cnt] = k[cnt] - 32;
		k++;
	}
	return (k);
}
