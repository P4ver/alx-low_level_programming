#include "main.h"
/**
 * flip_bits -  function that returns the number of bit
 *	you would need to flip to get from one number to another,
 * @n: the frst nmb,
 * @m: the secnd nmb,
 * Return: the nmb of bit,
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_res_ = n ^ m;
	unsigned int cnt_x = 0;

	while (x_res_ > 0)
	{
		cnt_x += x_res_ & 1;
		x_res_ >>= 1;
	}
	return (cnt_x);
}
