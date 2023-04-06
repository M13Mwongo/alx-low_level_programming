#include "main.h"
/**
 * is_prime_number - checks if input is prime number
 * @n: number checked
 *
 * Return: 1(trure) or 0(false)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{

