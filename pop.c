#include "monty.top"

/**
 * pop_code - function that removes top element
 * @head: pointer to stack
 * @count: the line number
 * Return: void
 */

void pop_code(stack_t **head, unsigned int count)
{
	stack_t *top;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	*head = top->next;
	free(top);
}
