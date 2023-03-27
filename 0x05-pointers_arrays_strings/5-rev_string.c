#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return:void
 */
void rev_string(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
