#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: 1 (success), 0 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
