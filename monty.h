#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)*
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

extern bus_z bus_;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode*
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_z - structure to carry relevant information
 * @arg: value of argument passed
 * @m_file: pointer to a file
 * @info: line info
 * @_flag: keep track of stack and queue
 */

typedef struct bus_t
{
	char *arg;
	FILE *m_file;
	char *info;
	int _flag;
}  bus_z;

void fr_stack(stack_t *head);
void push_code(stack_t **top, unsigned int count);
void add_node(stack_t **head, int m);
void add_queue(stack_t **head, int m);
