#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *	of a square matrix of integers,
 *@a: we use it to calcule the main and anti diagonal,
 *@size: the variable consider as the column,
 *
 */
void print_diagsums(int *a, int size)
{
	int mds = 0;
	int ads = 0;
	int h;

	for (h = 0; h < size; h++)
	{
		mds += a[h * size + h];
		ads += a[h * size + (size - 1 - h)];
	}
	printf("%d, %d\n", mds, ads);
}
