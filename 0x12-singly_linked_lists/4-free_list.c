#include "lists.h"
/**
 * free_list - frees momeory allocated
 * @head: list in question
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
