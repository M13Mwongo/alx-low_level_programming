#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
