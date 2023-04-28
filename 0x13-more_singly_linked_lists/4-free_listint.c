#include "lists.h"
/**
 * free_listint - frees memory occupied by list
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
