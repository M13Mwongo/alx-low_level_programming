#include "lists.h"
/**
 * add_nodeint_end - add new node to end of list
 * @head: list
 * @n: int to add
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tailNode, *newList = malloc(sizeof(listint_t));

	if (newList == NULL)
	{
		return (NULL);
	}
	newList->n = n;
	newList->next = NULL;
	if (*head == NULL)
	{
		*head = newList;
	}
	else
	{
		tailNode = *head;
		while (tailNode->next != NULL)
		{
			tailNode = tailNode->next;
		}
		tailNode->next = newList;
	}
	return (newList);
}
