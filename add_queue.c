#include "monty.h"

/**
 * add_queue - to at node at tail
 * @m: new_value
 * @head: pointer to the stack
 * Return: void
 */

void add_queue(stack_t **head, int m)
{
	stack_t *n_node, *temp;

	temp = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->m = m;
	n_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		temp->next = n_node;
		n_node->prev = temp;
	}
}
