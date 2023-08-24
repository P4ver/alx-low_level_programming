#include "main.h"
/**
 * reverse_array -  a function that reverses the content of
 *	an array of integers.
 *@a: the variable of array,
 *@n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int cnt, tmpo;

	for (cnt = 0; cnt < n--; cnt++)
	{
		tmpo = a[cnt];
		a[cnt] = a[n];
		a[n] = tmpo;
	}
}
