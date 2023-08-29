#include "main.h"
/**
 * _memcpy - the function that copies memory area,
 *@dest: the pointer,
 *@src: variabke which is source,
 *@n: the, lengeth will becopied,
 *Return: pointer dest,
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s_tu;

	for (s_tu = 0; s_tu < n; s_tu++)
	{
		dest[s_tu] = src[s_tu];
	}
	return (dest);
}
