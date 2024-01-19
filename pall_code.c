#include "monty.h"
#include <stdio.h>
#include <unistd.h>

/**
* _pall - adds element to stack
* @stack: the stack
* @i: line number
* Return: void
*/

void _pall(stack_t **stack, unsigned int i)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	
	return (*stack);
}
