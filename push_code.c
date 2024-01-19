#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _push - adds element to stack
* @stack: the stack
* @i: line number
* @trigger: the opcode
* Return: void
*/

void _push(stack_t **stack, unsigned int i, char *trigger)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
		free(new);
	}

	if (sscanf(trigger, "%d", &(new->n)) != 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", i);
		exit(EXIT_FAILURE);
		free(new);
	}
	/* add at front */
	new->next = *stack;
	new->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;
}
