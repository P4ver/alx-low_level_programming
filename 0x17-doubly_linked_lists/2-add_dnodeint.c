#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning,
 * @head: pntr to pntr to the head,
 * @n: integer,
 * Return: the address of the new element, or NULL if it failed,
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *jd = malloc(sizeof(dlistint_t));

	if (jd == NULL)
		return (NULL);
	jd->n = n;
	jd->prev = NULL;
	jd->next = *head;
	if (*head != NULL)
		(*head)->prev = jd;
	*head = jd;
	return (jd);
}
