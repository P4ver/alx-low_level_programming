#include "main.h"
/**
 * _strlen - returns a lenght of s,
 *@s: a parameter (string),
 *Return: lenght
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
