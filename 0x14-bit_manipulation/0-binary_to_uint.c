#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary number to an unsigned int,
 * @b: ptn=r to string,
 * Return: the string b that is not 0 or 1 b is NULL,
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int q, nm_x;

	if (b == NULL)
		return (0);
	for (q = 0; b[q]; q++)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);
	}
	nm_x = 0;
	for (q = 0; b[q]; q++)
		nm_x = nm_x * 2 + (b[q] - '0');
	return (nm_x);
}
