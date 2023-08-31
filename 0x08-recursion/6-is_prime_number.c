#include "main.h"
/**
 * _primo - function check if it is a prime,
 *@p: number that is evaluated
 *@g: it is iterator,
 * Return: the result prime,
 */
int _primo(int p, int g)
{
	if (g == 1)
		return (1);
	if (g > 0 && (p % g) == 0)
		return (0);
	else
		return (_primo(p, g - 1));
}
/**
 * is_prime_number -  function that returns 1 if the input integer
 *	is a prime number,otherwise return 0,
 *@n: var n is a number ,
 * Return: return a function primo,
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_primo(n, n - 1));
}
