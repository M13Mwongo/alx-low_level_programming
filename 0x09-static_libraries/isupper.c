#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks whether a letter is uppercase
 * @c: int to check
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
