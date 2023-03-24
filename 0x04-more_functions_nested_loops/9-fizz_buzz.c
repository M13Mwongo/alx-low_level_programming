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
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i == 3 || i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i == 5 || i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	_putchar('\n');
	return (0);
}
