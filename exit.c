    #include "main.h"

/**
 * exit_shell - Handles the exit condition in a simple shell.
 * @user_input: A pointer to the user input buffer.
 * @input_size: A pointer to the size of the user input buffer.
 */

void exit_shell(char *user_input, size_t *input_size)
{
    user_input[strcspn(user_input, "\n")] = '\0';
    if (strcmp(user_input, "exit") == 0)
    {
        free(user_input);
        exit(0);
    }
    free(user_input);
    user_input = NULL;
    *input_size = 0;
}
