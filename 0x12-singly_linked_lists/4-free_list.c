#include "lists.h"
/**
 * free_list - frees momeory allocated
 * @head: list in question
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		free(head->str);
		free(head->len);
	}
}
