#include "main.h"
/**
 * _strncat - function that concatenates two strings.,
 *@dest: pointer to  destination input,
 *@src: pointer to source input,,
 *@n: most number bytes frm src;
 *Return: result dest,
 */
char *_strncat(char *dest, char *src, int n)
{
	int cnt_c = 0;
	int cnt_c2;

	while (dest[cnt_c])
		cnt_c++;
	for (cnt_c2 = 0 ; cnt_c2 < n && src[cnt_c2] != '\0'; cnt_c2++)
		dest[cnt_c + cnt_c2] = src[cnt_c2];
	return (dest);
}
