    #include "main.h"

/**
 * exit_shell - Handles the exit condition in a simple shell.
 * @user_input: A pointer to the user input buffer.
 * @input_size: A pointer to the size of the user input buffer.
 */

void exit_shell (char *user_input)
{
    if (strcmp(user_input, "exit\n") == 0)
    {
        free(user_input);
        exit(0);
    }
}
