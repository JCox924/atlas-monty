#include "monty.h"
/**
 * op_map - function that will perform the operation
 *
 * @token: operation
 *
 * @line: line read
 *
 * Return: void
 */
void (*op_map(char *token, unsigned int line)) (stack_t **, unsigned int)
{
	int i = 0;
	instruction_t operation[] = {
		{"push", pushit},
		{"pall", print_all},
		{NULL, NULL}
	};
	for (; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalid_op(token, line);
	return (NULL);
}
