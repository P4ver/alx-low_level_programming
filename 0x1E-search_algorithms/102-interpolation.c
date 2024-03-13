#include "search_algos.h"

/**
  * interpolation_search - Searches using interpolation search.
  * @array: pntrto the frst element of the arr to search,
  * @size: sz of the arr.
  * @value: val to search.
  * Return: Null, -1, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t z, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		z = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (z < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", z);
			break;
		}
		if (array[z] == value)
			return (z);
		if (array[z] > value)
			r = z - 1;
		else
			l = z + 1;
	}
	return (-1);
}
