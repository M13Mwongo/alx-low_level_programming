#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: largest int
 */
int largest_number(int a, int b, int c)
{
	int numLarge;

	if  (a > b && a > c)
	{
		numLarge = a;
	}
	else if (b > a && b > c)
	{
		numLarge = c;
	}
	else (c > b)
	{
		numLarge = c;
	}
	else
	{
		numLarge = b;
	}
	return (numLarge);
}
