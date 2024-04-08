#include "monty.h"

/**
 * malloc_error - error handler: malloc
 *
 *Description: prints error message
 *
 * Return: void
*/

void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");

	exit(EXIT_FAILURE);
}
