#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t nd_cnt = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nd_cnt++;
	}
	return (nd_cnt);
}
