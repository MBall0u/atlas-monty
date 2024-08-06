#include "monty.h"
/**
*
*
*
*/
void push(stack_t **stack, unsigned int i)
{
	stack_t *temp;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = i;
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
