#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0,
 * @n: a pntr to nmbr,
 * @index: the ndx of the bit,
 * Return: 1 if it workd,
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
