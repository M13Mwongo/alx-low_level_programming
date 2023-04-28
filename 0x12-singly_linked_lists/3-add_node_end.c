#include "lists.h"
/**
 * add_node_end - adds node to the end of list
 * @head: double pointer to list
 * @str: string to be copied
 *
 * Return: modified double pointer to list, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head, *newList = malloc(sizeof(list_t));

	if (newList == NULL)
	{
		return (NULL);
	}
	newList->str = strdup(str);
	newList->len = strlen(str);
	newList->next = NULL;
	if (*head == NULL)
	{
		*head = newList;
		return (newList);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newList;
	}
	return(*head);
}
