#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array in question
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sumLR = 0, sumRL = 0;

	for (i = 0; i < size; i++)
	{
		sumLR += *(a + i * size + i);
		sumRL += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sumLR, sumRL);
}
