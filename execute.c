#include "main.h"

/**
 * execute - Executes a command
 * @cmd_arr: The command to execute
 * Return: 0 on success, 1 on failure
 */

int execute(char *cmd_arr[])
{
	pid_t pid;
	char *exe_path;
	int status;

	exe_path = g_path(cmd_arr[0]);
	if (exe_path == NULL)
	{
		write(1, cmd_arr[0], strlen(cmd_arr[0]));
		write(1, ": not found\n", 12);
		return (1);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Error at creating a child process\n");
		exit(1);
	}
	if (pid > 0)
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		if (WEXITSTATUS(status) != 0)
		{
			exit(2);
		}
	}
	else if (pid == 0)
	{
		execve(exe_path, cmd_arr, environ);
		perror("Error");
		exit(1);
	}
	free(exe_path);
	return (0);
}

/**
 * command_read - Reads a command from stdin
 * @s: The command to read
 * Return: 0 on success, 1 on failure
 */

int command_read(char *s)
{
	int i;
	char *token = NULL;
	char *cmd_array[100];

	if (strcmp(s, "exit") == 0)
		return (2);
	if (strcmp(s, "env") == 0)
		return (_printenv());
	token = strtok(s, " ");
	i = 0;
	while (token != NULL && i < 100)
	{
		cmd_array[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	cmd_array[i] = NULL;
	return (execute(cmd_array));
}
