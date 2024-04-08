#include "monty.h"

/*
 *free_stack - frees stach
 *
 *Description: frees the stack from mem
 *
 *@top:top of the stack
 *
 * Return: void
 */

void free_stack(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
	{
		return;
	}

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	free(top);
}
