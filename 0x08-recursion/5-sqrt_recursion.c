#include "main.h"
int _sqrt(int x, int y);
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number in question
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
/**
 * _sqrt - finds natural square root
 * @x: base number
 * @y: iterator
 *
 * Return: square root
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	return (_sqrt(x, y + 1));
}
