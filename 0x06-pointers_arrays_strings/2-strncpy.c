#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination of string
 * @src: string to be copied
 * @n: bytes
 *
 * Return: copied string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
