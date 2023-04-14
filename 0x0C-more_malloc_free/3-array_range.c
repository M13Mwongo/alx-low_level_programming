#include "main.h"
/**
 * array_range - creates array of integers
 * @min: lower limit of values
 * @max: upper limit of values
 *
 * Return: array of integers | NULL
 */
int *array_range(int min, int max)
{
	int i, *arr, size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		++min;
	}
	return (arr);
}
