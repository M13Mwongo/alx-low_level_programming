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
	char *digit;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		digit = argv[i];
		if (!isdigit(digit))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(digit);
	}
	printf("%d\n", sum);
	return (0);
}
