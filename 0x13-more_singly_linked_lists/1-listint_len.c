#include "lists.h"
/**
 * listint_len - finds number of elements in linked list
 * @h: list
 * Return: count of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
