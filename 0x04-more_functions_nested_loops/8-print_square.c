#include "main.h"
/**
 *print_square - function that prints a square,
 *@size: the number of height and width,
 *
 *decription: we use nested for loop to make the square by '#'
 */
void print_square(int size)
{
	int q;
	int y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (q = 0; q < size; q++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
