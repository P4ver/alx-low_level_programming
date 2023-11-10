#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list,
 * @head: pntr to head,
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tm_p;

	while (head != NULL)
	{
		tm_p = head;
		head = head->next;
		free(tm_p);
	}
}
