#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at index point
 * @head: linked list
 * @idx: index to insert node
 * @n: data to be added at new node
 * Return: address of new node | NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode = malloc(sizeof(listint_t));
	unsigned int count;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	for (count = 0; count < idx - 1 && temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->next = temp->next;
	newNode->n = n;
	temp->next = newNode;
	return (newNode);
}
