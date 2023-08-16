#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function prints all numbers frm n to
 *	to 98
 *@n: the number n id the start of counting to 98,
 *
 *Description: print to 98 using for loop and if
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
