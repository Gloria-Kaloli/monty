#include "monty.h"

/**
 * pstr_code - prints the string at the top
 * @head: pointer to the stack
 * @count: the line number
 * Return: void
 */

void pstr_code(stack_t **head, unsigned int count)
{
	stack_t *top;
	(void)count;

	top = *head;
	while (top)
	{
		if (top->n > 127 || top->n <= 0)
		{
			break;
		}
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}
