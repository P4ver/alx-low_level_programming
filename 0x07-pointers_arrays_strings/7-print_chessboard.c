#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard,
 *@a: pnter to '2D'array,
 */
void print_chessboard(char (*a)[8])
{
	int qi;
	int qb;

	for (qi = 0; qi < 8; qi++)
	{
		for (qb = 0; qb < 8; qb++)
		{
			_putchar(a[qi][qb]);
			_putchar(' ');
		}
	_putchar('\n');
	}
}
