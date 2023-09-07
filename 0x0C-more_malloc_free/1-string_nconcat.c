#include "main.h"
/**
 * *string_nconcat -  function that concatenates two strings,
 *@s1: variable char 's1,
 *@s2: variable char 's2,
 *@n: interger n,
 *Return: return the pinter *re_s,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln_1 = 0, ln_2 = 0;
	char *re_s;
	unsigned int q, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ln_1] != '\0')
		ln_1++;
	while (s2[ln_2] != '\0')
		ln_2++;
	if (n >= ln_2)
		n = ln_2;
	re_s = malloc(ln_1 + n + 1);
	if (re_s == NULL)
		return (NULL);
	for (q = 0; q < ln_1; q++)
		re_s[q] = s1[q];
	while ( y < n)
	{
		re_s[q] = s2[y];
		y++;
		q++;
	}
	re_s[q] = '\0';
	return (re_s);
}
