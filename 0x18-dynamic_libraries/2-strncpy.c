#include "main.h"
/**
 * _strncpy - a function that copies a string.;
 *@dest: destination input,
 *@src: source input;
 *@n: number of bytes f src;
 * Return: dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cnt_c2;

	for (cnt_c2 = 0 ; cnt_c2 < n && src[cnt_c2] != '\0'; cnt_c2++)
		dest[cnt_c2] = src[cnt_c2];
	while (cnt_c2 < n)
	{
		dest[cnt_c2] = '\0';
		cnt_c2++;
	}
	return (dest);
}
