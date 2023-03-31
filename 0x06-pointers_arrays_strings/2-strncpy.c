#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination of string
 * @src: string to be copied
 * @n: number of characters to be copied from source
 *
 * Return: copied string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (i == n - 1)
		{
			dest[i + 1] = '\0';
		}
	}
	return (dest);
}
