#include "main.h"
int _prime(int x, int y);
/**
 * is_prime_number - checks if input is prime number
 * @n: number checked
 *
 * Return: 1(trure) or 0(false)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}
/**
 * _prime - recursive prime number checker
 * @x: base number
 * @y: iterator
 *
 * Return: 1 if true
 */
int _prime(int x, int y)
{
	if (y == 1)
	{
		return (y);
	}
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (_prime(x, y - 1));
}
