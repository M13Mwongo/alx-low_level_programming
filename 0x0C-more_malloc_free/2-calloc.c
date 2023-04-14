#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of array
 *
 * Return: pointer to array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	ptr = arr;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	arr = ptr;
	return (arr);
}
