#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *slow = head;

	if (current == NULL)
	{
		return (98);
	}
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		if (current >= slow)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			break;
		}
		if (current == NULL)
		{
			break;
		}
		slow = slow->next;
		/*current = current->next;*/
	}
	return (count);
}
