#include "lists.h"
/**
 * free_list - function that frees a list_t list,
 * @head: ptn to head of list,
 */
void free_list(list_t *head)
{
	list_t *cnt_x;

	while (head != NULL)
	{
		cnt_x = head;
		head = head->next;
		free(cnt_x->str);
		free(cnt_x);
	}
}
