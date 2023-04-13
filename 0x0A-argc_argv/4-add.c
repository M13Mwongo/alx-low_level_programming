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
	int digit;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		digit = atoi(argv[i]);
		printf("argument: %d\n", argv[i], 10);
		sum += digit;
	}
	printf("%d\n", sum);
	return (0);
}
