#include "monty.h"

/**
 * add_code - adds the top two elements
 * @head: pointer to the stack
 * @count: the line number
 * Return: void
 */

void add_code(stack_t **head, unsigned int count)
{
	stack_t *top;
	int num = 0, temp;

	top = *head;
	while (top)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	temp = top->n + top->next->n;
	top->next->n = temp;
	*head = top->next;
	free(top);
}
