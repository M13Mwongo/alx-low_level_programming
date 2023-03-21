#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if character is an alphanumeric character
 * @c: char checked
 *
 * Return: 1 (success) or 0 (fail)
 */
int _isalpha(int c)
{
	if (isalnum(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
