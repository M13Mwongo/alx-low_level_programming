#include "main.h"
/**
 * set_string - sets value of pointer to char
 * @s: pointer to pointer to char that is to change
 * @to: poiniter to char that s points to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
