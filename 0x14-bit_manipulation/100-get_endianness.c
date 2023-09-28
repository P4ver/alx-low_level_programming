#include "main.h"
/**
 * get_endianness - function that checks the endianness,
 *
 * Return: 0 if big endian, 1 if little endian,
 */
int get_endianness(void)
{
	unsigned int nmb_x = 1;
	char *b_ptr = (char *)&nmb_x;

	if (*b_ptr == 1)
		return (1);
	else
		return (0);
}
