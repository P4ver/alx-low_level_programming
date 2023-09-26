#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the head of the listint_t,
 */
void free_listint(listint_t *head)
{
	listint_t *cnt_x;

	while (head != NULL)
	{
		cnt_x = head;
		head = head->next;
		free(cnt_x);
	}
}
