#include <stdio.h>
#include "main.h"
/**
 **_strstr - a function that locates a substring,
 *@haystack: intput string,
 *@needle: input string,
 *Return: return 'NULL' if the substring is not found,
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hs_t = haystack;
		char *n_t = needle;

		while (*hs_t && *n_t && *hs_t == *n_t)
		{
			hs_t++;
			n_t++;
		}
		if (!*n_t)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
