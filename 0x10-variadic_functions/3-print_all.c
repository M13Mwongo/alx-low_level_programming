#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @fm: format of data being passed
 * Return: void
 */
void print_all(const char * const fm, ...)
{
	va_list data;
	char *s;
	unsigned int u = 0;

	va_start(data, fm);
	while (fm[u] && fm != NULL)
	{
		switch (fm[u])
		{
			case 'c':
				printf("%c", va_arg(data, int));
				break;
			case 'i':
				printf("%d", va_arg(data, int));
				break;
			case 'f':
				printf("%f", va_arg(data, double));
				break;
			case 's':
				s = va_arg(data, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		u++;
		if (fm[u] != '\0' && (fm[u] == 'c' || fm[u] == 'i' || fm[u] == 'f' || fm[u] == 's'))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
