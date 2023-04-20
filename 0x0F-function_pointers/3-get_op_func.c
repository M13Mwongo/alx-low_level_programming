#include "3-calc.h"
/**
 * get_op_function - selects correct function to implement
 * @int: first int
 * @int: second int
 * @s: passed argument
 * Return: arithmetic result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},{"%", op_mod},
		{NULL, NULL}
	};
	int i;


}
