#include "monty_copy.h"
/**
*
*
*
*/
void push(stack_t **stack, unsigned int line_number, int a)
{
	stack_t *temp;
	stack_t *new;

	if (a == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
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

		new->n = a;
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
