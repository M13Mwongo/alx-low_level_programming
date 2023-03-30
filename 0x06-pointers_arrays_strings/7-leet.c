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
	int input[10] = {97, 111, 101, 116, 108, 65, 79, 69, 84, 76};
        int output[10] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

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
