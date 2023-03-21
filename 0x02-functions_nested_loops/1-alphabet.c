#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
