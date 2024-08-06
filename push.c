#include "monty.h"
/**
*
*
*
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;

	if (global_int == 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		new->n = global_int;
		new->next = NULL;

		if (*stack == NULL)
			*stack = new;
		else
		{
			temp = *stack;
			new->next = temp;
			*stack = new;
		}
	}
}
