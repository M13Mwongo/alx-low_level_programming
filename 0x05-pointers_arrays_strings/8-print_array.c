#include "main.h"
/**
 * print_array - prints an array
 * @a: array in question
 * @n: number of elements to be printed
 *
 * Return:void
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf("\n\n");
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
