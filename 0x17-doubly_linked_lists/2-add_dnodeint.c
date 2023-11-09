#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
