#include "monty.h"

/**
 * pchar_code - funct that prints the char at the top of the stack
 * @head: pointer to the stack
 * @count: the line number
 * Return: void
 */

void pchar_code(stack_t **head, unsigned int count)
{
	stack_t *top;

	top = *head;
	if (!top)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (top->n > 127 || top->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}
