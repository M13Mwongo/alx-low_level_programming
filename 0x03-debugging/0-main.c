#include "main.h"
#include "positive_or_negative.c"
/**
 * main - test positive_or_negative function
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	return (0);
}
