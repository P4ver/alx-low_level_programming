#include "search_algos.h"

/**
* linear_search - Searches for a target value in an array of integers.
*
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: The value to search for.
*
* Return: The index of the target value if found, otherwise -1.
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int g;
	int flg_c = 0;

	if (array == NULL)
		return (-1);
	for (q = 0; q < size; q++)
	{
		printf("Value checked array[%u] = [%d]\n", q, array[q]);
		if (array[q] == value)
		{
			flg_c = 1;
			return (q);
		}
	}
	if (flg_c != 1)
		return (-1);
	return (g);
}
