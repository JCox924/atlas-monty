#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void pushit(stack_t **top, unsigned int line_number);
void print_all(stack_t **top, unsigned int line_number);
int is_comment(char *token, int line_counter);
void (*op_map(char *token, unsigned int line)) (stack_t **, unsigned int);
void nonint_error(unsigned int line);
void invalid_op(char *invInstruction, unsigned int line);
void free_stack(stack_t *top);
void arg_error(void);
void open_error(char **);
int num_check(char *token);
void malloc_error(void);
void executer(char **argv);

#endif
