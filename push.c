#include "monty.h"

/**
 * push_code - add node to the stack
 * @top: top of the stack
 * @count: line_number
 * Return: void
 */

void push_code(stack_t **top, unsigned int count)
{
	int m, k = 0, num = 0;

	if (bus_.arg)
	{
		if (bus_.arg[0] == '-')
			k++;
		for (; bus_.arg[k] != '\0'; k++)
		{
			if (bus_.arg[k] > 57 || bus_.arg[k] < 48)
				num = 1; }
		if (num == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus_.m_file);
			free(bus_.info);
			fr_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus_.m_file);
		free(bus_.info);
		fr_stack(*top);
		exit(EXIT_FAILURE); }
	m = atoi(bus_.arg);
	if (bus_._flag == 0)
		add_node(top, m);
	else
		add_queue(top, m);
}
