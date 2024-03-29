#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
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

/**
* prototypes - for used functions
* @stack: the stack
* @i: line number
* @trigger: opcode
*/

void _push(stack_t **stack, unsigned int i, char *trigger);
void _pall(stack_t **stack, unsigned int i);
void pint(stack_t **stack, unsigned int i);
void pop(stack_t **stack, unsigned int i);
void nop(stack_t **stack, unsigned int i);
void add(stack_t **stack, unsigned int i);
void swap(stack_t **stack, unsigned int i);
void _mul(stack_t **stack, unsigned int i);
void _div(stack_t **stack, unsigned int i);
void _sub(stack_t **stack, unsigned int i);
void _mod(stack_t **stack, unsigned int i);
void pstr(stack_t **stack, unsigned int i);
void pchar(stack_t **stack, unsigned int i);
void free_stack(stack_t **stack);
#endif
