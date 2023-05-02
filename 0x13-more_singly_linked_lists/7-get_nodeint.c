#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: list
 * @index: position of node
 * Return: linked list at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	for (count = 0; count < index && temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
