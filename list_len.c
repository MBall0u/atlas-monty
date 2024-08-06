#include "monty.h"
/**
 * 
 * 
 * 
*/
int list_len(stack_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}