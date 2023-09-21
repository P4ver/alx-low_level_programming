#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *nd_nw;

	if (str == NULL)
		return (NULL);
	nd_nw = malloc(sizeof(list_t));
	if (nd_nw == NULL)
		return (NULL);
	nd_nw->str = strdup(str);
	if (nd_nw->str == NULL)
	{
		free(nd_nw);
		return (NULL);
	}
	nd_nw->len = strlen(str);
	nd_nw->next = *head;
	*head = nd_nw;
	return (nd_nw);
}
