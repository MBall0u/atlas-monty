#include "monty.h"
/**
 * 
 * 
 * 
*/
void pop(stack_t **head)
{
	int temp_int = (*head)->n;
	stack_t *temp = *head;

	if (*head == NULL)
		exit(EXIT_FAILURE);

	*head = (*head)->next;
	free(temp);
}