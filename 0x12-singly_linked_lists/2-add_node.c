#include "lists.h"
/**
 * add_node - adds noew list to beginning of node
 * @head: list arrangement
 * @str: string to be copied
 * Return: new list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	if (newHead != NULL)
	{
		return (NULL);
	}
	newHead->str = strdup(str);
	if (newHead->str == NULL)
	{
		free(newHead);
		return (NULL);
	}
	newHead->len = strlen(str);
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
