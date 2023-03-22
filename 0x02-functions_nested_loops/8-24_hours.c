#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
