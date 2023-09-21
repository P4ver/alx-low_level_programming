#include "lists.h"
#include <stdio.h>
/**
 * print_list -  function that prints all the elements of list_t lst,
 * @h: ptr to the head of lst,
 * Return: the nmbre of nodes in lst,
 */
size_t print_list(const list_t *h)
{
	size_t cnt_xx = 0;

	while (h)
	{
		printf("[%u] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
		h = h->next;
		cnt_xx++;
	}
	return (cnt_xx);
}
