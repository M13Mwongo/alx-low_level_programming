#include "main.h"
#include <string.h>
/**
 * _strchr - return pointer to first occurence of char c, or NULL if not found
 * @s: pointer to char
 * @c: character being looked for
 *
 * Return: pointer if found, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[strlen(s)]);
	}
	return (NULL);
}
