#include "monty_copy.h"
/**
 * 
 * 
 * 
*/
void swap(stack_t **head, unsigned int line_number, int a __attribute__ ((unused)))
{
	stack_t *temp = *head;
	stack_t *temp_s = (*head)->next;

	if ((list_len(*head)) >= 2)
	{
		temp->next = temp_s->next;
		temp_s->next = temp;
		*head = temp_s;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
}
