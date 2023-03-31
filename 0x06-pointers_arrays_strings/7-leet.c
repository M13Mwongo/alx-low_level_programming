#include "main.h"
/**
 * leet - encode string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	int input[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	int output[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (input[j] == *(s + i))
			{
				*(s + i) = output[j];
			}
		}
	}
	return (s);
}
