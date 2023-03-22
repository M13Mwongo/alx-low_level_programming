#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the entirety of the times tables of 9
 *
 * Return: null
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				printf("0");
			}
			else if (j <= 9)
			{
				if (prpduct <= 9)
				{
					printf(",  %d", product);
				} else
				{
					printf(", %d", product);
				}
			}
		}
		printf("\n");
	}
}
