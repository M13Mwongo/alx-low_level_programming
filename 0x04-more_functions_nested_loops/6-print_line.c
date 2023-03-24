#include "main.h"
/**
 * print_line - prints straight line
 * @n: number of times to print an underscore (_)
 * Return: null
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
