#include "main.h"
/**
 * main - prints number of arguments passed to it
 * @argc: count of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
