#include "main.h"
/**
 * _abs - it's a function computes the absulte
 *	value of int
 *@p: the val that well be computed the abs
 *
 *Return: p*(-1) will be positive
 */
int _abs(int p)
{
	if (p < 0)
		return (p * (-1));
	else
		return (p);
}
