#include "main.h"
/**
 * *_calloc -  function that allocates memory for an array, using malloc,
 *@nmemb: int 'variable,
 *@size: int 'variable,
 *Return: return the pointer,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p_tr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p_tr = malloc(nmemb * size);
	if (p_tr == NULL)
		return (NULL);
	memset(p_tr, 0, nmemb * size);
	return (p_tr);
}
