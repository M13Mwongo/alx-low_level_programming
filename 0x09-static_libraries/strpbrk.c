#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first instance of any of the bytes in a string
 * @s: string being searched
 * @accept: bytes being looked for
 *
 * Return:pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (s);
}
