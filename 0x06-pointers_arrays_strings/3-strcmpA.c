#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 (equal strings), < 0 (s1 < s2), > 0 (s1 > s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s != '\0' && *s1 != *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
