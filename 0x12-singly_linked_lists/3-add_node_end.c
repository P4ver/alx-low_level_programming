#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list,
 * @head: ptr to ptr to head of list,
 * @str: string that will be dplicated,
 * Return: the address of the new element,
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ndnw;
	list_t *cnt_x;

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
	ndnw->next = NULL;
	if (*head == NULL)
	{
		*head = ndnw;
		return (ndnw);
	}
	cnt_x = *head;
	while (cnt_x->next != NULL)
		cnt_x = cnt_x->next;
	cnt_x->next = ndnw;
	return (ndnw);
}
