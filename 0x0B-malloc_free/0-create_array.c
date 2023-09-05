#include "main.h"
/**
 * *create_array -  function that creates an array of chars,
 *@size: number of 'char to allocate in arr,
 *@c: char to intialize the elements of 'arr,
 *Return: the resulte arr_q,
 */
char *create_array(unsigned int size, char c)
{
	char *arr_q;
	unsigned int t;

	if (size == 0)
		return (NULL);
	arr_q = malloc(size * sizeof(char));
	if (arr_q == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
		arr_q[t] = c;
	return (arr_q);
}
