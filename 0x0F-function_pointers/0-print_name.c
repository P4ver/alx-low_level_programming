#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name,
 * @name: (pointer' name of the prson,
 * @f: pointer,
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
