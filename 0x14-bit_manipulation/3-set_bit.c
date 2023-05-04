#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: number in question
 * @index: index of operation
 * Return: 1 on success | -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
