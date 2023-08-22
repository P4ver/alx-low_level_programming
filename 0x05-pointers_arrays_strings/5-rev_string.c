#include "main.h"
/**
 * rev_string - reverse string,
 *@s: the string that is reversed,
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int lenght = 0;
	int q;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (q = 0; q < lenght; q++)
	{
		lenght--;
		reverse = s[q];
		s[q] = s[lenght];
		s[lenght] = reverse;
	}
}
