#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 *@q: input val,
 *Return: q val;
 */
char *leet(char *q)
{
	int a, b;
	char lt_1[] = "aAeEoOtTlL";
	char lt_2[] = "4433007711";

	for (a = 0; q[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (q[a] == lt_1[b])
			{
				q[a] = lt_2[b];
			}
		}
	}
	return (q);
}
