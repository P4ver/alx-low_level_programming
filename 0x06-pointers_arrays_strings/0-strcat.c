#include "main.h"
/**
 * _strcat - function that concatenates two strings.,
 *@dest: pointer to  destination input,
 *@src: pointer to source input,,
 *Return: result dest,
 */
char *_strcat(char *dest, char *src)
{
	int cnt_c = 0;
	int cnt_c2;

	while (dest[cnt_c])
		cnt_c++;
	for (cnt_c2 = 0 ; src[cnt_c2]; cnt_c2++)
		dest[cnt_c++] = src[cnt_c2];
	return dest;
}
