#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character in a string
 * @str: string to be interpreted
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
}
