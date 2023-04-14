#include "main.h"
/**
 * _realloc - reallocates memory
 * @old_size: old memory block size
 * @new_size: new memory block size
 * @ptr: pointer to existing memory block
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		new_ptr = malloc(old_size);
		for (i = 0; i < old_size; i++)
		{
			((char*)new_ptr)[i] = ((char*)ptr)[i];
		}
	}
	else
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			((char*)new_ptr)[i] = ((char*)ptr)[i];
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size + old_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	free(ptr);
	return (new_ptr);
}
