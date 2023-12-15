#include "monty.h"

/**
 *rotr_code- function that rotates the stack to the bottom
 *@head: pointer to the stack
 *@count: the line number
 *Return: void
 */

void rotr_code(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *top;

	top = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (top->next)
	{
		top = top->next;
	}
	top->next = *head;
	top->prev->next = NULL;
	top->prev = NULL;
	(*head)->prev = top;
	(*head) = top;
}
