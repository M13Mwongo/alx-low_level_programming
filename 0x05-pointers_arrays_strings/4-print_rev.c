#include "main.h"
#include <string.h>
/**
 * print_rev - reverse print text
 * @s: string to be revevresed
 *
 * Retrun: null
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
