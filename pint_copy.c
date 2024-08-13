#include "monty_copy.h"
/**
 * 
 * 
 * 
*/
void pint(stack_t **stack, unsigned int line_number, int a __attribute__ ((unused)))
{
	if (*stack != NULL)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
}
