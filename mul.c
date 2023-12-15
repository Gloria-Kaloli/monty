#include "monty.h"

/**
 * mul_code - function that multiply elements
 * @head: pointer to stack
 * @count: the line number
 * Return: void
 */

void mul_code(stack_t **head, unsigned int count)
{
	stack_t *top;
	int size = 0, temp;

	top = *head;
	while (top)
	{
		top = top->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	temp = top->next->n * top->n;
	top->next->n = temp;
	*head = top->next;
	free(top);
}
