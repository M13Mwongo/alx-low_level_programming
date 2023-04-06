#include "main.h"
#include <string.h>
/**
 * _pal - palindrome checker
 * @s: string checked
 * @start: start int count of string
 * @end: end int count of string
 *
 * Return: 1 - true or 0 otherwise
 */
int _pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (_pal(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if string is a palidrome
 * @s: string checked
 *
 * Return: 1 (true) or 0 otherwise
 */
int is_palindrome(char *s)
{
	int start = 0;
	int len = strlen(s) - 1;

	if (len == 0 || len == 1)
	{
		return (0);
	}
	return (_pal(s, start, len));
}
