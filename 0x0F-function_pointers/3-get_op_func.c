#include "3-calc.h"

/**
 * get_op_func -  function that selects the correct function to perform the
 *  operation asked by the user
 *  @s: The operator
 *  Return:a pointer to the function that corresponds to the
 *  operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int u;

	u = 8;

	while (ops[u].op)
	{
		if (strcmp(ops[u].op, s) == 0)
			return (ops[u].f);
		u++;
	}
	return (NULL);
}
