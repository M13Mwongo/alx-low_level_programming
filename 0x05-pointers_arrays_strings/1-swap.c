#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first in
 * @b: second int
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
