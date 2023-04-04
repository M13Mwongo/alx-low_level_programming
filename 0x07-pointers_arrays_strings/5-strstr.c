#include "main.h"
#include <string.h>
/**
 * _strstr - finds first occurence of substring ina string
 * @needle: substring
 * @haystack: string
 *
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int len = strlen(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] == haystack[i + j] && needle[i] != '\0')
		{
			j++;
		}
		if (j == len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
