#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number in question
 *
 * Return: -1 (n < 0), otherwise return factorial
 */
int factorial(int n)
{
	int product;

	if (n > 0)
	{
		product = n * factorial(n - 1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (product);
}
