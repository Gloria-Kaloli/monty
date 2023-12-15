#include "monty.h"

/**
 * pall_code - function that prints stack values
 * @head: pointer to stack
 * Return: void
 */

void pall_code(stack_t **head, unsigned int var_)
{
	stack_t *top;
	(void)var_;

	top = *head;
	if (top == NULL)
		return;
	while (top)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
