#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format of data being passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list data;
	int i;
	char c;
	char *s;
	double f;
	unsigned int ui = 0;

	va_start(data, format);
	while (format[ui] && format)
	{
		switch (format[ui])
		{
			case 'c':
				c = va_arg(data, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(data, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(data, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(data, char*);
				if (s != NULL)
				{
					printf("%s", s);
				}
				if (s == NULL)
				{
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		ui++;
		if (format[ui] != '\0' && (format[ui] == 'c' || format[ui] == 'i' || format[ui] == 'f' || format[ui] == 's'))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
