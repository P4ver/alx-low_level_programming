#include "main.h"
/**
 * *array_range - function that creates an array of integers,
 *@min: int var,
 *@max: int vaar,
 *Return: return the pointer, arr_p,
 */
int *array_range(int min, int max)
{
	int *arr_p;
	int q = 0;

	if (min > max)
		return (NULL);
	arr_p = malloc(sizeof(int) * (max - min + 1));
	if (arr_p == NULL)
		return (NULL);
	while (min <= max)
	{
		arr_p[q] = min;
		q++;
		min++;
	}
	return (arr_p);
}
