#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s:input string,
 *@accept: input 'Bytes,
 *Return: return unsigned int,
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ct = 0;

	while (*s)
	{
		int bnd = 0;
		char *s_pnter = accept;

		while (*s_pnter)
		{
			if (*s == *s_pnter)
			{
				bnd = 1;
				break;
			}
			s_pnter++;
		}
		if (!bnd)
			break;
		ct++;
		s++;
	}
	return (ct);
}
