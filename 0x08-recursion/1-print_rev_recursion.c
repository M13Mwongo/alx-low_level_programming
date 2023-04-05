#include "main.h"
#include <string.h>
/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recusion(s + 1);
		_putchar(*s);
	}
}
