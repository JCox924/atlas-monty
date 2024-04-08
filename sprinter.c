#include "monty.h"

/*
 *print_all - prints all numbers in stack
 *
 *Description: prints the elements of a stack
 *
 *@top: element at the top of the stack (head)
 *
 *@line_number: ...
 *
 * Return: void
 */
void print_all(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;
	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
