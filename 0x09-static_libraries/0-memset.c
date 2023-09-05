#include "main.h"
/**
 * _memset - function that fills memory with a constant byte,
 *@s: the pointer,
 *@b: variabke which is const Byte,
 *@n:max byte to use f the memory area,
 *Return: pointer @s,
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int s_tu;

	for (s_tu = 0; n > 0; s_tu++)
	{
		n--;
		s[s_tu] = b;
	}
	return (s);
}
