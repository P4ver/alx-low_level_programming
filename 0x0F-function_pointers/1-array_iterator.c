#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a
 *	parameter on each element of an array.
 * @array: pointer to arr,
 * @size: the arr, size,
 * @action: pointer to fct,
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t um;

	if (array == 0 || action == 0)
		return;
	for (um = 0; um < size; um++)
		action(array[um]);
}
