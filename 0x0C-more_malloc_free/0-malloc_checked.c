#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc,
 * @b: variable integer,
 *Return: return the 'pointer,
 */
void *malloc_checked(unsigned int b)
{
	int *p_t;

	p_t = malloc(b);
	if (p_t == NULL)
	{
		exit(98);
	}
	return (p_t);
}
