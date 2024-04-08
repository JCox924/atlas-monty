#include "monty.h"
int number;

/*
 *executer - integrates all functions to execute
 *
 *Description: opens,reads, and execute monty files
 *
 * @argv: argument vector
 *
 * Return: void
 */
void executer(char **argv)
{
	void (*p_func)(stack_t **, unsigned int);
	FILE *fp;
	char *buf = NULL, *token = NULL, command[1024];
	size_t len = 0;
	ssize_t line_size;
	unsigned int line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		open_error(argv);
	}
	while ((line_size = getline(&buf, &len, fp)) != EOF)
	{
		token = strtok(buf, "\n\t\r ");
		if (token == '\0')
		{
			continue;
		}
		strcpy(command, token);
		if (is_comment(token, line_counter) == 1)
		{
			continue;
		}
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t\r ");
			if (token == NULL || num_check(token) == -1)
			{
				nonint_error(line_counter);
			}
			number = atoi(token);
			p_func = op_map(command, line_counter);
			p_func(&top, line_counter);
		}
		else
		{
			p_func = op_map(token, line_counter);
			p_func(&top, line_counter);
		}
		line_counter++;
	}
	fclose(fp);
	if (buf != NULL)
	{
		free(buf);
	}
	free_stack(top);
}
