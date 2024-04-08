#include "monty.h"

int number;

/*
 * pushit - pushes number on stack(LIFO)
 *
 *Description: pushes new number onto stack
 *
 *@top: element at the top of the stack (head)
 *
 *@line_number: ...
 *
 * Return: void
 */

void pushit(stack_t **top, unsigned int line_number)
{
	stack_t *newNode;

	(void) line_number;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		malloc_error();

	newNode->n = number;
	newNode->prev = NULL;
	if (*top == NULL)
	{
		newNode->next = NULL;
		*top = newNode;
	}
	else
	{
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
	}
}
