#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
* pstr - prints elements
* @stack: stack to swap
* @i: line number
* Return: void
*/

void pstr(stack_t **stack, unsigned int i)
{
	stack_t *temp;
	(void)i;

	if (*stack == NULL)
		fprintf(stderr, "\n");

	temp = *stack;

	while (temp != NULL)
	{
		if (temp->n > 0 && temp->n <= 127)
			fprintf(stdout, "%c", temp->n);
		else
			exit(EXIT_FAILURE);
		temp = temp->next;
	}
		fprintf(stdout, "\n");
}
