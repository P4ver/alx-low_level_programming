#include "main.h"
/**
 * _islower - functuin to check if the c
 *	islower or not
 *
 * @c: the character from ASCII
 *
 *Return: 1 the c is lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
