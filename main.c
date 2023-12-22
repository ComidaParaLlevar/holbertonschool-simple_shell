#include "main.h"
/**
 * main - Entry point
 * Return: 0 on success, 1 on failure
 */

int main(void)
{
	char *line = NULL;
	size_t buf_size = 0;
	ssize_t characters = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		characters = getline(&line, &buf_size, stdin);
		if (characters == -1)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			break;
		}
		if (line[characters - 1] == '\n')
			line[characters - 1] = '\0';
		trim_whitespace(line);
		if (*line == '\0')
			continue;
		if (command_read(line) == 2)
			break;
	}
	free(line);
	return (0);
}
