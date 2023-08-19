#include "main.h"
/**
 *print_triangle - function that prints triangle,
 *@size: nuber of the height of the triangle,
 *
 *description: print triangle using nested loop and '#',
 */
void print_triangle(int size)
{
	int q;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (q = 1; q <= size; q++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - q))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
