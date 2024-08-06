#ifndef monty_h
#define monty_h

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern int global_int;

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
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int i);
void pall(stack_t **stack);
size_t list_len(stack_t **head);
int (*get_func(char *str))(stack_t, unsigned int);
void nop(stack_t *stack __attribute__ ((unused)), unsigned int line_number __attribute__ ((unused)));
void pall(stack_t **stack);
void pint(stack_t *stack);
void pop(stack_t **head);
void swap(stack_t **head, unsigned int line_number);
void add(stack_t **stack);
void free_list(stack_t **stack);

#endif
