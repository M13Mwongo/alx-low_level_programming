#include <stdio.h>
/**
 * main - All hexadecimal numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned char hex = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(hex);
		hex++;
	}
	hex = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
