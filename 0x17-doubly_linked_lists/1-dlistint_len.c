#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 *	in a linked dlistint_t,
 * @h: pntr to head,
 * Return: the number of elements,
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt_x = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt_x++;
	}
	return (cnt_x);
}
