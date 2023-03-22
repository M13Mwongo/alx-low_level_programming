#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: param to print from
 *
 * Return: null
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == n)
		{
			printf("0");
		} else
		{
			printf(", %d",i);
		}
	}
	_putchar('\n');
}
