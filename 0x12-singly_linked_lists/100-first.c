#include "lists.h"
void first_executed(void)__attribute__((constructor));
/**
 * first_executed - print before main
 * Return: void
 */
void first_executed(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
