#include "lists.h"
/**
 * pop_listint - deletes the head of a node
 * @head: node in question
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}
