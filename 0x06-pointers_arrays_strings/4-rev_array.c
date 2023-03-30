#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the array
 * @a: array in question
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int hold, start;
	int finish = n - 1;

	for (start = 0; start < finish; start++)
	{
		hold = *(a + start);
		*(a + start) = *(a + finish);
		*(a + finish) = hold;
		finish--;
	}
}
