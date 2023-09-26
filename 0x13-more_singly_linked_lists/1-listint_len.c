#include "lists.h"
/**
 * listint_len - function that returns the number of
 *	elements in a linked listint_t,
 * @h: a ptr to the head of lnked lst,
 * Return: numbr of nodes in lst,
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt_x;
	const listint_t *tmp;

	cnt_x = 0;
	tmp = h;
	while (tmp != NULL)
	{
		cnt_x++;
		tmp = tmp->next;
	}
	return (cnt_x);
}
