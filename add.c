#include "monty.h"
/**
 * 
 * 
 * 
*/
void add(stack_t **stack)
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
}