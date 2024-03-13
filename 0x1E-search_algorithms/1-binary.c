#include "search_algos.h"
/**
  * binary_search - searches for a value in a sorted arr
  *                 of int using binary search.
  * @array: pntr to the first element of the arr to search.
  * @size: num of elments in the arr.
  * @value: val to search for.
  *
  * Return: if the value is not present or the array is NULL,
  */
int binary_search(int *array, size_t size, int value)
{
	size_t s, lsr, lmn;

	if (array == NULL)
		return (-1);

	for (lsr = 0, lmn = size - 1; lmn >= lsr;)
	{
		printf("Searching in array: ");
		for (s = lsr; s < lmn; s++)
			printf("%d, ", array[s]);
		printf("%d\n", array[s]);

		s = lsr + (lmn - lsr) / 2;
		if (array[s] == value)
			return (s);
		if (array[s] > value)
			lmn = s - 1;
		else
			lsr = s + 1;
	}
	return (-1);
}
