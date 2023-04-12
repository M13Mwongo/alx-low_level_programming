#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = strlen(s1), len2 = strlen(s2);
	char *concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < len1; i++)
	{
		*(concat + i) = *(s1 + i);
	}
	for (i = len1; i < (len1 + len2); i++)
	{
		*(concat + i) = *(s2 + (i - len1));
	}
	*(concat + len1 + len2) = '\0';
	return (concat);
}
