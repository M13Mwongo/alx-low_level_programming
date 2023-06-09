#include "lists.h"
/**
 * add_nodeint - add new node at beginning of list
 * @head: list
 * @n: integer to add
 * Return: address of new element/ NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
