#include "monty.h"

/**
 *open_error - error handler: unable to open file
 *
 *Description: prints error message if unable to open file
 *
 *@argv: argument vector
 *
 *Return: void
 */

void open_error(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
