#include "monty.h"

/*
 *nonint_error - error handler: non-integer
 *
 *Description: prints error message
 *
 *@line: line
 *
 *Return: void
 */
void nonint_error(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}
