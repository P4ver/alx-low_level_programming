#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t,
 * @head: a pointer to the head of the listint_t,
 * @n: the integer to be added,
 * Return: the address of the new element,
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x_nd, *lst_nd;

	x_nd = malloc(sizeof(listint_t));
	if (x_nd == NULL)
		return (NULL);
	x_nd->n = n;
	x_nd->next = NULL;
	if (*head == NULL)
		*head = x_nd;
	else
	{
		lst_nd = *head;
		while (lst_nd->next != NULL)
			lst_nd = lst_nd->next;
		lst_nd->next = x_nd;
	}
	return (x_nd);
}
