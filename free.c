#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_stack - frees the stack
* @stack: the stack to free
* Return: void
*/

void free_stack(stack_t **stack)
{
	stack_t *temp;

	if (*stack == NULL)
		fprintf(stderr, "Stack is empty");


	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
