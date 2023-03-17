#include <stdio.h>
/**
 * main - Possible combinations of single integers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			;
		}
	}
	putchar('\n');
	return (0);
}
