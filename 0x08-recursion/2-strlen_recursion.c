#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: the var string will be printed,
 *Return: return the lenght,
 */
int _strlen_recursion(char *s)
{
	int len1gh = 0;

	if (*s)
	{
		len1gh = len1gh + 1;
		len1gh = len1gh + _strlen_recursion(s + 1);
	}
	return (len1gh);
}
