#include "main.h"
/**
 * create_array - creates array[size] initialised by c
 * @c: initialiser of array
 * @size: size of array
 *
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
