#include "monty.h"

/**
 *invalid_op - error handler: invalid operation
 *
 *Description: prints error for invalid operation
 *
 * @invInstruction: instruction
 *
 * @line: line
 *
 * Return: void
 */

void invalid_op(char *invInstruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invInstruction);
	exit(EXIT_FAILURE);
}
