#include "main.h"
/**
 * _strspn - returns byts in initial segment of s that are part of param accept
 * @s: segment being checked
 * @accept: acceptable characters
 *
 * Return: number of acceptable chars in segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		count++;
	}
	return (count);
}
