#include "monty.h"

bus_z bus_ = {NULL, NULL, NULL, 0};

/**
 * main - code interpreter
 * @argc: number of arguments
 * @argv: monty m_file location
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *info;
	FILE *m_file;
	size_t num = 0;
	ssize_t r_line = 1;
	stack_t *stack_ = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty m_file\n");
		exit(EXIT_FAILURE);
	}
	m_file = fopen(argv[1], "r");
	bus_.m_file = m_file;
	if (!m_file)
	{
		fprintf(stderr, "Error: Can't open m_file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		info = NULL;
		r_line = getline(&info, &num, m_file);
		bus_.info = info;
		count++;
		if (r_line > 0)
		{
			execute(info, &stack_, count, m_file);
		}
		free(info);
	}
	fr_stack(stack_);
	fclose(m_file);
	return (0);
}
