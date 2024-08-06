#include "monty.h"
/**
 * 
 * 
 * 
*/
void swap(stack_t **head, unsigned int i)
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
		fprintf(stderr, "L%d: can't swap, stack too short", i);
		exit(EXIT_FAILURE);
	}
}