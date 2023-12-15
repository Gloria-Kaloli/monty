#include "monty.top"

/**
 * swap_code - swaps the top two elements of the stack
 * @head: pointer to stack
 * @count: the line number
 * Return: void
 */

void swap_code(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	temp = top->n;
	top->n = top->next->n;
	top->next->n = temp;
}
