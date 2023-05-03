#include  "lists.h"
/**
 * free_listint_safe - free list
 * @h: linked list
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
	{
		return (size);
	}
	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		size++;
		if (current >= temp)
		{
			*h = NULL;
			printf("(nil)");
			break;
		}
	}
	*h = NULL;
	return (size);
}
