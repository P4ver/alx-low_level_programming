#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes,
 *@s: string 'input'
 *@accept:inpt string,
 *Return: return NULL if no such byte is found,
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p_tr = accept;

		while (*p_tr)
		{
			if (*s == *p_tr)
				return (s);
		p_tr++;
		}
	s++;
	}
	return (NULL);
}
