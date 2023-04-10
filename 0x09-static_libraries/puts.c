#include "main.h"
#include <string.h>
/**
 * _puts - prints out a string followed by a new line to stdout
 * @str: string to be outputted
 *
 * Return: void
 */
void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
