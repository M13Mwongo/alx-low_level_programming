#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings with conditions
 * @dest: destinantion string
 * @src: source string
 * @n: byte limit
 *
 * Return: joined string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
