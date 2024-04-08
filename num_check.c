#include "monty.h"

/**
 *num_check - checks for integer
 *
 *@token: string to check
 *
 *Return: -1 if input != int, 1 if so
 */
int num_check(char *token)
{
	int i;

	if (token == NULL)
		return (-1);

	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] != '-' && isdigit(token[i]) == 0)
			return (-1);
	}
	return (1);
}
