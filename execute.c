#include "main.h"
/**
 * execute - execute command
 * @args: argument
 * Return: exit status
 */
int execute(char **command)
{
	int p_id = fork(), status;

	if (p_id == 0)
	{
		if (execve(command[0], command, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}
	return (status);
}
