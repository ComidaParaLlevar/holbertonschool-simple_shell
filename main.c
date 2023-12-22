#include "main.h"
/**
* main - Simple UNIX command line interpreter.
* Return: Always 0 (success).
*/

#define MAX_INPUT 1024

int main (int argc, char **argv)
{
    char cwd[MAX_INPUT];
    char *user_input = NULL, **command;
    size_t input_size = 0;
    char *prompt = "$ ";
    ssize_t bytes;
	int status = 0;

    (void)argc; (void)argv;

while(1)
{
    if (isatty(STDIN_FILENO))
    {
        if (getcwd(cwd, sizeof(cwd)) == NULL)
        {
            perror("Error getting current working directory");
            return (1);
        }

        printf("%s: %s", cwd, prompt);
    }

    bytes = getline(&user_input, &input_size, stdin);
	 if (bytes == -1 || _strcmp(user_input, "exit") == 0)
    {
		free(user_input);
		break;
	}
	user_input[input_size -1] = '\0';

	if (_strcmp("env", user_input) == 0)
	{
		_env();
		continue;
	}
	if (user_input == NULL)
	{
		status = 0;
		continue;
	}
	command = _token(user_input, " ");
	command[0] = get_path(command[0]);

	if (command[0] != NULL)
		status = execute(command);

	free(command);
}
return (status);
}










