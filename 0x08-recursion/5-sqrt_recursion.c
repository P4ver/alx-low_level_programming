#include "main.h"
/**
 * infsqrt - function that recurses to sqrt of a numb,
 *@n: num to calc 'sqrt,
 *@k: the nuber (iterator),
 *Return: return th sqrt,
 */
int infsqrt(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	else
		return (infsqrt(n, k + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of
 *	a number.
 *@n: variable will calc the sqrt,
 *Return: return sqrt,
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (infsqrt(n, 0));
}
