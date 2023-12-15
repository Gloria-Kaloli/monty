#include "monty.h"
/**
 * pint_code - function that prints top element
 * @head: pointer to stack
 * @count: the line number
 * Return: void
 */
void pint_code(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
