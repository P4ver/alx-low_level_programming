#include "main.h"
/**
 *_isdigit - function checkes if a c is a digit
 *@c: the character will be checked
 *
 *Return: 1 if a c character is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
