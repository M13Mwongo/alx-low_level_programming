#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 3 || i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
