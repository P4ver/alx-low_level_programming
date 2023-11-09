#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t,
 * @h: pntr to head,
 * Return: the number of nodes,
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt_x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt_x++;
	}
	return (cnt_x);
}
