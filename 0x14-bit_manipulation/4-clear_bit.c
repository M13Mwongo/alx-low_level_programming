#include "main.h"
/**
 * clear_bit - sets the value of abit to 0 at given index
 * @n: number in question
 * @index: index to carry out operation
 * Return: 1 on success| -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
