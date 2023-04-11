#include "main.h"
/**
 * main - program that prints its name
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *pn = argv[argc - 1];

	printf("%s\n", pn);
	return (0);
}
