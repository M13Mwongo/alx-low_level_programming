#include "main.h"
/**
 * _pow_recursion - raises number x to power y
 * @x: base number
 * @y: power
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
	}
	return (result);
}
