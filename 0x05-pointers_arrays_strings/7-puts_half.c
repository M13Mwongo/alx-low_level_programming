#include "main.h"
#include <string.h>
/**
 * putss_half - prints half a string
 * @str: string to be printed
 * Return:void
 */
void puts_half(char *str)
{
	int i, length;

	length = strlen(str);
	if (length % 2 == 0)
	{
		for(i = length / 2; i <= length; i++)
		{
			putchar(str[i]);
		}	
	}
	else
	{
		for(i = (length - 1)/2; i <= length; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
