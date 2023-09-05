#include "main.h"
/**
 * _strcmp -  a function that compares strings.
 *@s1: input string1,
 *@s2: input string2,
 *Return: the result integer,
 */
int _strcmp(char *s1, char *s2)
{
	int cnt_c = 0;

	while (s1[cnt_c] != '\0' && s2[cnt_c] != '\0')
	{
		if (s1[cnt_c] != s2[cnt_c])
		{
			return (s1[cnt_c] - s2[cnt_c]);
		}
		cnt_c++;
	}
	return (0);
}
