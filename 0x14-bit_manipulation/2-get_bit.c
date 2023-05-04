#include "main.h"
/**
 * get_bit - gets value of bit at index
 * @n: number being traversed
 * @index: index of bit
 * Return: bit value| -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
