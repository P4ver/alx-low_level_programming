#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t cnt_xx = 0;

	while (h != NULL)
	{
		if ( (h->str) == NULL)
			printf("[0] (nill)\n");
		else
			printf ("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt_xx++;
	}
	return (cnt_xx);
}
