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
    char *prompt = "$ ";
    (void)argc; (void)argv;


    if (isatty(STD_FILENO))
    {
        if (getcwd(cwd, sizeof(cwd)) == NULL)
        {
            perror("Error getting current working directory");
            return (1);
        }

        printf("%s: %s", cwd, prompt);
        
        return (0);
    }
    return (0);

}
