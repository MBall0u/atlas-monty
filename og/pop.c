#include "monty.h"
/**
 * 
 * 
 * 
*/
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	free(temp);
}
