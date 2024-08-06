#include "monty.h"
/**
 * 
 * 
 * 
*/
void pint(stack_t **stack)
{
	if (*stack != NULL)
		printf("%d\n", (*stack)->n);
}