#include "simple_shell.h"

/**
* main - Simple UNIX command line interpreter.
* Return: Always 0 (success).
*/

#define MAX_INPUT 1024

int main (int argc, char **argv)
{
    char cwd[MAX_INPUT];
    char *user_input = NULL;
    size_t input_size = 0;
    char *prompt = "$ ";
    char *token;
    ssize_t bytes;
    

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

    if (bytes == -1)
    {
        if (isatty(STDIN_FILENO))
            printf("\n");
        return (1);
    }
    exit_shell(user_input);
    free(user_input);
    user_input = NULL;

    token = strtok(user_input, " \t\n");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " \t\n");
    }

    free(user_input);
    printf("\n");
  
}
return (0);
}

