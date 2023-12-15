#include "monty.h"

/**
 * add_node - function to add node
 * @head: pointer to stack 
 * @m: value added to stack
 * Return: void
 */

void add_node(stack_t **head, int m)
{

	stack_t *n_node, *temp;

	temp = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = n_node;
	n_node->n = m;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}
