#include "variadic_functions.h"
/**
 * print_strings - prints strings given
 * @separator: separates strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char*);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		putchar('\n');
	}
}
