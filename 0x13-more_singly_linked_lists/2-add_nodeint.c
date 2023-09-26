#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a ptr to the head of the listint_t list.
 * @n: the integer to be added,
 *
 * Return: return address of new elmnt
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_nd;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = *head;
	*head = nw_nd;
	return (nw_nd);
}
