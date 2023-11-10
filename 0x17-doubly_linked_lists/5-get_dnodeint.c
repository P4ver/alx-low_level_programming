#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 *	the nth node of a dlistint_t linked,
 * @head: ptnr to pntr to the head,
 * @index: index of the node,
 * Return: Null if the node does not exit,
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt_t = 0;

	while (head != NULL)
	{
		if (cnt_t == index)
			return (head);
		head = head->next;
		cnt_t++;
	}
	return (NULL);
}
