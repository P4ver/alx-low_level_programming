#include "lists.h"
/**
 *  list_len - function that returns the number of elements
 *	in a linked list_t list.
 * @h: ptr ti the head of the lst,
 * Return: the numbr of nodes in the lst,
 */
size_t list_len(const list_t *h)
{
	size_t cnt_xx = 0;

	while (h)
	{
		cnt_xx++;
		h = h->next;
	}
	return (cnt_xx);
}
