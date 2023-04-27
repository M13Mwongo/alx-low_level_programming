#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list
 * @head: beginning of list
 * @str: string to be duplicated
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->str = strdup(str);
		free(temp);
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
