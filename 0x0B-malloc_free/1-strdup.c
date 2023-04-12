#include "main.h"
#include <string.h>
/**
 * _strdup - returns pointer to newly allocated mem space
 * @str: string to be duplicated
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, len = strlen(str);
	char *str2 = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(str2 + i) = *(str + i);
	}
	return (str2);
}
