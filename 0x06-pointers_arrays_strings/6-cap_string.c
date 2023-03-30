#include "main.h"
/**
 * cap_string - capitalise all words of a string
 * @s: string to be capitalised
 *
 * Return: capitalised string
 */
char *cap_string(char *s)
{
	int i, j;
	int specialArray[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (specialArray[j] == *(s + i - 1))
				{
					*(s + i) -= 32;
				}
			}
		}
	}
	return (s);
}
