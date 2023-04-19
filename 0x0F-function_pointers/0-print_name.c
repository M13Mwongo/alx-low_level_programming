#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name in question
 * @f: function pointer to alter name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
