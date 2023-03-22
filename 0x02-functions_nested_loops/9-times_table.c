#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the entirety of the times tables of 9
 *
 * Return: null
 */
void times_table(void)
{
	int i,j,product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			
			if (j == 0)
			{
				_putchar('0');
			}
			else if (j <= 9)
			{
				printf(",  %d", product);
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		printf("\n");
	}
}
