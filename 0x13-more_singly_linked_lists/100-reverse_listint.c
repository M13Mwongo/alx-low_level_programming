#include "lists.h"
/**
 * reverse_listint - reverse the order of a linked list
 * @head: linked list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reversed = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = reversed;
		reversed = current;
		current = next;
	}
	*head = reversed;
	return (reversed);
}
