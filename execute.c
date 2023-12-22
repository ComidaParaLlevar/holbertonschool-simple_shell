#include "main.h"
/**
 * execute - execute command
 * @args: argument
 * Return: exit status
 */
int execute(char **args)
{
	int p_id = fork(), status;

	if (p_id == 0)
	{
		if (execve(args[0],args,environ) == -1)
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
