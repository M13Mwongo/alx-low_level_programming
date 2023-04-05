#include "main.h"
/**
 * _strlen_recursion - finds the string length
 * @s: string in question
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
