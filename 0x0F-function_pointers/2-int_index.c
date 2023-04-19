#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: -1 (no match/ size <1)/ index of number (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			break;
		}
		else
		{
			continue;
		}
	}
	if (i == (size - 1))
	{
		return (-1);
	}
	return (i);
}
