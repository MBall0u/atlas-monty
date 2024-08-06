#include "monty.h"
/**
 * 
 * 
 * 
*/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int res = 0;

	if ((list_len(*stack)) >= 2)
	{
		temp = *stack;
		*stack = (*stack)->next;
		res += temp->n;
		res += (*stack)->n;
		(*stack)->n = res;
		free(temp);
		temp = NULL;
	}
	else
	{
		fprintf(stderr, "L<line_number>: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}