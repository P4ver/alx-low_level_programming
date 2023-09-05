#include "main.h"
/**
 *_isupper - the functions checkes for uppercase char
 *@c: the charrcter that will be checked
 *Return: 1 if the char is uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
