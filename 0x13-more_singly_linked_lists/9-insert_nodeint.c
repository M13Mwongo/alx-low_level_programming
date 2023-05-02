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
	listint_t *newNode, *temp = *head;
	unsigned int count;

	newNode = malloc(sizeof(listint_t));
	if (*head == NULL || newNode == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < idx - 1 && temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	newNode->n = n;
	temp->next = newNode;
	return (newNode);
}
