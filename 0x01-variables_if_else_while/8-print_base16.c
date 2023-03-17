#include <stdio.h>
/**
 * main - All hexadecimal numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a < '16'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
