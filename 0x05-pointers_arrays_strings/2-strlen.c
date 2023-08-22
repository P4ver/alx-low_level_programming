#include "main.h"
/**
 * _strlen - the function that returns a lenght of s,
 *@s: a parameter (string),
 */
int _strlen(char *s)
{
	int lenghtS = 0;

	while (*s != '\0')
	{
		lenghtS++;
		s++;
	}
	return (lenghtS);
}
