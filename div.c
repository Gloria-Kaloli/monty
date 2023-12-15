#include "monty.h"

/**
 * div_code - function to divide elements
 * @head: pointer to stack
 * @count: the line number
 * Return: void
 */

void div_code(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	if (top->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = top->next->n / top->n;
	top->next->n = temp;
	*head = top->next;
	free(top);
}
