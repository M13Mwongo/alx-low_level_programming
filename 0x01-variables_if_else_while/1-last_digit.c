#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n % 10);
	if (last_digit > 5)
	{
		printf("Last digit of n is %d and is greater than 5", last_digit);
	}
	else if (last_digit <= 5 && last_digit > 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of n is %d and is 0", last_digit);
	}
	return (0);
}
