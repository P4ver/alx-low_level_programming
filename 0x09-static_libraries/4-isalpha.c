#include "main.h"
/**
 * _isalpha - function to check for c alphabt
 *	ot not
 *
 *@c: character from ASCII code
 *
 *Return: 1 if the c char is alphabet
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
