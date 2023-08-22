#include "main.h"
/**
 *print_array - a function that printd n element of an arry;
 *@a: the name of arr;
 *@n: the number of arr that will be printed
 */
void print_array(int *a, int n)
{
	int in;

	for (in = 0; in < (n - 1); in++)
	{
		printf("%d, ", a[in]);
	}
	if (in == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
