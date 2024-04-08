#include "monty.h"

/**
 * is_comment - checks for # to signify comment
 *
 * @token: string to check
 *
 * @line_counter: line
 *
 * Return: -1 if not a comment, 1 if so
 */
int is_comment(char *token, int line_counter)
{
	if (token == NULL || token[0] == '#')
	{
	line_counter++;
	return (1);
	}
	return (-1);
}
