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

	i = n;
	do {
		if (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
		if (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	} while (i != 98)
	printf("98\n");
}
