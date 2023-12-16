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
    char user_input[MAX_INPUT];
    char *ptr = NULL;
    char input[MAX_INPUT];
    char *prompt = "$ ";
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
        
        if (fgets(user_input, sizeof(user_input), stdin) != NULL)
        {
            if (strcmp(user_input, "exit\n") == 0)
            {
                exit(0);
            }
        }

        if (fgets(user_input, sizeof(user_input), stdin) != NULL)
        {
            user_input[strcspn(user_input, "\n")] = '\0';
            if (*ptr == input[user_input])
            {
                return (0);
            }
        }
    }
    else
    {
        break;
    }
    
    return (0);

}
}
