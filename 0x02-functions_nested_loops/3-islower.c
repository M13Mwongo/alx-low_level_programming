#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if a character is a lower case
 *
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */
int _islower(char c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
