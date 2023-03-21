#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * _islower - checks if a character is a lower case
 *
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	return (islower(c));
}
