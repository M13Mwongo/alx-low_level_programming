#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: numbers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1) && separator != NULL)
			{
				printf("%d", va_arg(numbers, int));
			}
			else
			{
				printf("%d%s", va_arg(numbers, int), separator);
			}
		}
		va_end(numbers);
		putchar('\n');
	}
}
