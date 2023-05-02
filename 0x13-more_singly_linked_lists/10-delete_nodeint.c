#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: linked list
 * @index: index to delete node
 * Return: 1 (success) | -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previousNode;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (count = 0; count < index && temp != NULL; count++)
	{
		previousNode = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	previousNode->next = temp->next;
	free(temp);
	return (1);
}
