#include <stdio.h>
/**
 * int_index - a function that searches for an integer,
 * @array: pointer to the arr,
 * @size: nmbr of the elemznt of the arr,
 * @cmp: pointer to comparison fct,
 * Return: if no ele matches return -1,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int kh;

	if (array == 0 || cmp == 0 || size <= 0)
	{
		return (-1);
	}
	for (kh = 0; kh < size; kh++)
	{
		if (cmp(array[kh]) != 0)
		{
			return (kh);
		}
	}
	return (-1);
}
