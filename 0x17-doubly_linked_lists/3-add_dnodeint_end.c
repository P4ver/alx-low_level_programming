#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t,
 * @head: pntr to pntr to the head,
 * @n: integer,
 * Return:  the address of the new element, or NULL if it failed,
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *jd, *tm_p;

	jd = malloc(sizeof(dlistint_t));
	if (jd == NULL)
		return (NULL);
	jd->n = n;
	jd->next = NULL;

	if (*head == NULL)
	{
		jd->prev = NULL;
		*head = jd;
	}
	else
	{
		tm_p = *head;
		while (tm_p->next != NULL)
			tm_p = tm_p->next;
		tm_p->next = jd;
		jd->prev = tm_p;
	}
	return (jd);
}
