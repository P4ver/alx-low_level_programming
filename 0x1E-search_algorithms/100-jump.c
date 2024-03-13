#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted arr,
  * @array: pntr to the frst element of the arr to search.
  * @size: num of elements in the array.
  * @value: val to search,
  *
  * Return: if the val is not present or the array is NULL,
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jmp, st_p;

	if (array == NULL || size == 0)
		return (-1);

	st_p = sqrt(size);
	for (i = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		i = jmp;
		jmp += st_p;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; i < jmp && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
