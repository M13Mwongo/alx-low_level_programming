#include "function_pointers.h"
/**
 * array_iterator - iterates through an array
 * @array: array in question
 * @size: size of array
 * @action: function pointer to action done to array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
