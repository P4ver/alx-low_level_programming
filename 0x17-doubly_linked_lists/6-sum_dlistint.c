#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of
 *	all the data (n) of a dlistint_t,
 * @head: pntr to head,
 * Return: 0 if list empty,
 */
int sum_dlistint(dlistint_t *head)
{
	int s_m = 0;

	while (head != NULL)
	{
		s_m += head->n;
		head = head->next;
	}
	return (s_m);
}
