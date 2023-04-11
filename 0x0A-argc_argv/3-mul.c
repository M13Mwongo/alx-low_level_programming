#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: pointer to arguments
 *
 * Return: 0(success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
