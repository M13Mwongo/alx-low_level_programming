#include "lists.h"
/**
 * sum_listint - returns the sum of the n values in a linked list
 * @head: list
 * Return: sum of n/ 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
