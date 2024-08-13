#include "monty.h"
/**
 * 
 * 
 * 
*/
void (*get_func(char *str))(stack_t **, unsigned int)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 7)
	{
		if ((strcmp(ops[i].opcode, str)) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
