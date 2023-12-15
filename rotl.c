nclude "monty.h"

/**
 *rotl_code- rotates the stack to the top
 *@head: pointer to the stack
 *@count: the line number
 *Return: void
 */

void rotl_code(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *var_0 = *head, *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp = (*head)->next;
	temp->prev = NULL;
	while (var_0->next != NULL)
	{
		var_0 = var_0->next;
	}
	var_0->next = *head;
	(*head)->next = NULL;
	(*head)->prev = var_0;
	(*head) = temp;
}
