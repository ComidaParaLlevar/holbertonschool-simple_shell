#include "main.h"

/**
 * @brief 
 * 
 * 
 */

#define MAX_INPUT 1024

int main (int argc, char **argv)
{
    char cwd[MAX_INPUT];
    char *user_input = NULL;
    size_t input_size = 0;
    char *prompt = "$ ";
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
        free(user_input);
        return (1);
    }
   printf("\n");

   exit_shell(user_input, &input_size);
}
return (0);
}
