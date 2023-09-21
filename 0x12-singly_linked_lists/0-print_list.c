#include "lists.h"
/**
 * print_list -  function that prints all the elements of list_t lst,
 * @h: ptr to the head of lst,
 * Return: the nmbre of nodes in lst,
 */
size_t print_list(const list_t *h)
{
	size_t cnt_xx = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt_xx++;
	}
	return (cnt_xx);
}
