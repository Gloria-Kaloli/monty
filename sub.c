#include "monty.h"

/**
 *sub_code- function to subtract two elements
 *@head: pointer to stack
 *@count: the line counter
 *Return: void
 */

void sub_code(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int var_, num;

	temp = *head;
	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	var_ = temp->next->n - temp->n;
	temp->next->n = var_;
	*head = temp->next;
	free(temp);
}
