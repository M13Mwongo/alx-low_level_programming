#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination of copied bytes
 * @src: source of bytes
 * @n: number of bytes to copy
 *
 * Return: destinanion (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pd = dest;
	char *ps = src;

	for (i = 0; i < n; i++)
	{
		*pd++ = *ps++;
	}
	return (dest);
}
