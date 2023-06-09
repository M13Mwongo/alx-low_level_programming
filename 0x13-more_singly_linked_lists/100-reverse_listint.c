#include "lists.h"
/**
 * reverse_listint - reverse the order of a linked list
 * @head: linked list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;

	*head = NULL;
	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = *head;
		*head = curr;
		curr = next;
	}
	return (*head);
}
