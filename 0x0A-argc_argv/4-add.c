#include "main.h"
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: count of args
 * @argv: points to args
 *
 * Return: 0-success or 1-failure
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		int digit = atoi(argv[i]);
		if (!isdigit(digit))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc - 1 == 0)
		{
			printf("0\n");
		}
		sum += digit;
	}
	printf("%d\n", sum);
	return (0);
}
