#include "main.h"
/**
 * _strchr - the function that locates a character in a string,
 *@s: a pointer,
 *@c: constant,
 *
 * Return: return NULL pointer to s is not found the string,
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	return (NULL);
}
