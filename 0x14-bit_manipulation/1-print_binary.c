#include "main.h"
/**
 * print_binary - function that prints the binary representation of a nmb,
 * @n: integer var to be converted,
 * @Return: return the value of bin,
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
