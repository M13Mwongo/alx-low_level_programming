#include "main.h"
/**
 * positive_or_negative - checks whether number is positive or negative
 * @i: integer being checked
 *
 * Return: -1, 0 or 1
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
}
