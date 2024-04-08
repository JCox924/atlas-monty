#include"monty.h"

/**
 *arg_error - error handler: invalid argument
 *
 *Description: no file or arguments error handler
 *
 *Return: void
*/

void arg_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
