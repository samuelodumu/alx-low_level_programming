#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 *
 * @s: operator passed as argument
 *
 * Return: pointer to the corresponding operator given
 */

int (*get_op_func(char *s))(int, int)
{
	unsigned int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	while (i < sizeof(ops) / sizeof(ops[0]))
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
