#include "monty.h"

/**
 * fr_stack - function that frees stack
 * @head: pointer to stack
 * Return: void
 */

void fr_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
