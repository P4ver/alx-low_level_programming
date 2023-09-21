#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *ndnw;

	if (str == NULL)
		return (NULL);
	ndnw = malloc(sizeof(list_t));
	if (ndnw == NULL)
		return (NULL);
	ndnw->str = strdup(str);
	if (ndnw->str == NULL)
	{
		free(ndnw);
		return (NULL);
	}
	ndnw->len = strlen(str);
	ndnw->next = *head;
	*head = ndnw;
	return (ndnw);
}
