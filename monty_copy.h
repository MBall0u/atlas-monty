#ifndef monty_copy_h
#define monty_copy_h

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number, int a);
} instruction_t;

void add(stack_t **stack, unsigned int line_number, int a);
void free_list(stack_t **stack);
void (*get_func(char *str))(stack_t **, unsigned int, int);
int list_len(stack_t *head);
void nop(stack_t **stack, unsigned int line_number, int a);
void pall(stack_t **stack, unsigned int line_number, int a);
void pint(stack_t **stack, unsigned int line_number, int a);
void pop(stack_t **head, unsigned int line_number, int a);
void push(stack_t **stack, unsigned int line_number, int a);
void swap(stack_t **head, unsigned int line_number, int a);

#endif
