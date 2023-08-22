#include "main.h"
/**
 * *_strcpy - a function that copies the string;
 * @dest: where string will be copied to
 * @src: wher string copied from
 * Return: string,
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int t = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; t < j; t++)
	{
		dest[t] = src[t];
	}
	dest[j] = '\0';
	return (dest);
}
